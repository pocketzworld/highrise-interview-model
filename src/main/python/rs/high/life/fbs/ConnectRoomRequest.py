# automatically generated by the FlatBuffers compiler, do not modify

# namespace: fbs

import flatbuffers

class ConnectRoomRequest(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsConnectRoomRequest(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = ConnectRoomRequest()
        x.Init(buf, n + offset)
        return x

    # ConnectRoomRequest
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # ConnectRoomRequest
    def RoomId(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return ""

    # ConnectRoomRequest
    def UserId(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return ""

    # ConnectRoomRequest
    def Username(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return ""

def ConnectRoomRequestStart(builder): builder.StartObject(3)
def ConnectRoomRequestAddRoomId(builder, roomId): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(roomId), 0)
def ConnectRoomRequestAddUserId(builder, userId): builder.PrependUOffsetTRelativeSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(userId), 0)
def ConnectRoomRequestAddUsername(builder, username): builder.PrependUOffsetTRelativeSlot(2, flatbuffers.number_types.UOffsetTFlags.py_type(username), 0)
def ConnectRoomRequestEnd(builder): return builder.EndObject()
