#!/bin/sh -x

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

cd "/home/thalassa/dwhitney/catkin_ws/src/rosserial/rosserial_python"

# todo --install-layout=deb per platform
# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
/usr/bin/env \
    PYTHONPATH="/home/thalassa/dwhitney/catkin_ws/install/lib/python2.7/dist-packages:/home/thalassa/dwhitney/catkin_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/thalassa/dwhitney/catkin_ws/build" \
    "/usr/bin/python" \
    "/home/thalassa/dwhitney/catkin_ws/src/rosserial/rosserial_python/setup.py" \
    build --build-base "/home/thalassa/dwhitney/catkin_ws/build/rosserial/rosserial_python" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/thalassa/dwhitney/catkin_ws/install" --install-scripts="/home/thalassa/dwhitney/catkin_ws/install/bin"
