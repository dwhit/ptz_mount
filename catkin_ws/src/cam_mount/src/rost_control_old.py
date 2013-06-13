#!/usr/bin/env python
import rospy
import roslib; roslib.load_manifest('cam_mount')
import argparse
import random

from std_msgs.msg import *
from rost_common.msg import *
from cam_mount.msg import *
curX = 90
curY = 90
oldX = 90
oldY = 90
deg = 1
epsilon = 0.005

def callback(data):

    global curX
    global curY
    global oldX
    global oldY
    global deg

    horCentered = False
    vertCentered = False

    #extract info from LocalSurprise message  
    interesting = list(data.surprise)
    width = data.width
    height = data.height

    #convert LocalSurprise msg to camera coordinates
    bestPoint = interesting.index(max(interesting))
    i = bestPoint%width + 1
    j = bestPoint/width + 1
   
    centerLeft = width/2
    
    if(width%2 == 1):
        centerRight = width/2 + 1
    else:
        centerRight = centerLeft
   
    centerBottom = height/2
    
    if(height%2 == 1):
        centerTop = height/2 + 1
    else:
        centerTop = centerBottom

    if(centerLeft  <= i <=  centerRight):
        newX = curX

    elif(i > centerRight):
        newX = curX - (i - centerRight)*deg
    else:
        newX = curX + (centerLeft - i)*deg
    
    if(centerBottom  <= j <=  centerTop):
        newY = curY
    elif(j > centerTop):
        newY = curY - (j - centerTop)*deg
    else:
        newY = curY + (centerBottom - j)*deg
    
    unmoved = (newX == curX == oldX) and (newY == curY == oldY)

    #small chance to move randomly
    if(unmoved and random.random() < epsilon):
        newX = random.triangular(0, 180)
        newY = random.triangular(0, 180)
    
    if(newX > 180):
        newX = 180
    if(newX < 0):
        newX = 0
    if(newY > 180):
        newY = 180
    if(newY < 0):
        newY = 0

    oldX = curX
    oldY = curY

    curX = newX
    curY = newY

    pub = rospy.Publisher('mountPos',Pos)
    msg = Pos()
    msg.xPos = newX
    msg.yPos = newY
    msg.i = i
    msg.j = j

    pub.publish(msg) 

def surprise_listen():

    rospy.init_node('rost_controller')
    rospy.Subscriber('rost/local_surprise', LocalSurprise, callback)
    rospy.spin()

def perplexity_listen():

    rospy.init_node('rost_controller')
    rospy.Subscriber('rost/cell_perplexity', LocalSurprise, callback)
    rospy.spin()

if __name__ == '__main__':
   

    parser = argparse.ArgumentParser(description='Controls camera mount')
    parser.add_argument('-c','-p','--cell','--perplexity', help='tracks most perplexing objects', action='store_true')
    parser.add_argument('-l','-s','--local','--surprise', help='tracks most interesting objects', action='store_true')
    args = parser.parse_args()

    if(args.local):
        print "tracking rarest tag"
        try:
            surprise_listen()
        except rospy.ROSInterruptException:
            pass
    else:
        print "tracking perplexity"
        try:
            perplexity_listen()
        except rospy.ROSInterruptException:
            pass
        
