# automatically generated by the FlatBuffers compiler, do not modify

# namespace: fbs

import flatbuffers

class AvatarLeftEvent(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsAvatarLeftEvent(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = AvatarLeftEvent()
        x.Init(buf, n + offset)
        return x

    # AvatarLeftEvent
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # AvatarLeftEvent
    def UserId(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return ""

def AvatarLeftEventStart(builder): builder.StartObject(1)
def AvatarLeftEventAddUserId(builder, userId): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(userId), 0)
def AvatarLeftEventEnd(builder): return builder.EndObject()
