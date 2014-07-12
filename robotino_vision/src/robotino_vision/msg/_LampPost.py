"""autogenerated by genpy from robotino_vision/LampPost.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import robotino_vision.msg

class LampPost(genpy.Message):
  _md5sum = "0f1f7a8dfa3cde155d77d2d64cddf185"
  _type = "robotino_vision/LampPost"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """robotino_vision/Lamp[3] lamps		# A fixed-length vector of lamps

================================================================================
MSG: robotino_vision/Lamp
string color		# lamp color
bool isLighting		# true if this lamp is lighting and false if this lamp is not.



"""
  __slots__ = ['lamps']
  _slot_types = ['robotino_vision/Lamp[3]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       lamps

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LampPost, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.lamps is None:
        self.lamps = [robotino_vision.msg.Lamp(),robotino_vision.msg.Lamp(),robotino_vision.msg.Lamp()]
    else:
      self.lamps = [robotino_vision.msg.Lamp(),robotino_vision.msg.Lamp(),robotino_vision.msg.Lamp()]

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
      for val1 in self.lamps:
        _x = val1.color
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_struct_B.pack(val1.isLighting))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.lamps is None:
        self.lamps = None
      end = 0
      self.lamps = []
      for i in range(0, 3):
        val1 = robotino_vision.msg.Lamp()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.color = str[start:end].decode('utf-8')
        else:
          val1.color = str[start:end]
        start = end
        end += 1
        (val1.isLighting,) = _struct_B.unpack(str[start:end])
        val1.isLighting = bool(val1.isLighting)
        self.lamps.append(val1)
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
      for val1 in self.lamps:
        _x = val1.color
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_struct_B.pack(val1.isLighting))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.lamps is None:
        self.lamps = None
      end = 0
      self.lamps = []
      for i in range(0, 3):
        val1 = robotino_vision.msg.Lamp()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.color = str[start:end].decode('utf-8')
        else:
          val1.color = str[start:end]
        start = end
        end += 1
        (val1.isLighting,) = _struct_B.unpack(str[start:end])
        val1.isLighting = bool(val1.isLighting)
        self.lamps.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B = struct.Struct("<B")
