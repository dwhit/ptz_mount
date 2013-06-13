"""autogenerated by genpy from rost_common/TopicWeights.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class TopicWeights(genpy.Message):
  _md5sum = "75c9ed05a7fc76b7626159e4ea8e141c"
  _type = "rost_common/TopicWeights"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint32 seq
int32[] weight

"""
  __slots__ = ['seq','weight']
  _slot_types = ['uint32','int32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       seq,weight

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TopicWeights, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.seq is None:
        self.seq = 0
      if self.weight is None:
        self.weight = []
    else:
      self.seq = 0
      self.weight = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_struct_I.pack(self.seq))
      length = len(self.weight)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.weight))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (self.seq,) = _struct_I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.weight = struct.unpack(pattern, str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_struct_I.pack(self.seq))
      length = len(self.weight)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.weight.tostring())
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (self.seq,) = _struct_I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.weight = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
