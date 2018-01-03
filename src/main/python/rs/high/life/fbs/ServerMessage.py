# automatically generated by the FlatBuffers compiler, do not modify

# namespace: fbs

import flatbuffers

class ServerMessage(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsServerMessage(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = ServerMessage()
        x.Init(buf, n + offset)
        return x

    # ServerMessage
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # ServerMessage
    def ContentType(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Uint8Flags, o + self._tab.Pos)
        return 0

    # ServerMessage
    def Content(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            from flatbuffers.table import Table
            obj = Table(bytearray(), 0)
            self._tab.Union(obj, o)
            return obj
        return None

def ServerMessageStart(builder): builder.StartObject(2)
def ServerMessageAddContentType(builder, contentType): builder.PrependUint8Slot(0, contentType, 0)
def ServerMessageAddContent(builder, content): builder.PrependUOffsetTRelativeSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(content), 0)
def ServerMessageEnd(builder): return builder.EndObject()