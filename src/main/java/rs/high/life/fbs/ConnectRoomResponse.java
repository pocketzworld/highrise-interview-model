// automatically generated by the FlatBuffers compiler, do not modify

package rs.high.life.fbs;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class ConnectRoomResponse extends Table {
  public static ConnectRoomResponse getRootAsConnectRoomResponse(ByteBuffer _bb) { return getRootAsConnectRoomResponse(_bb, new ConnectRoomResponse()); }
  public static ConnectRoomResponse getRootAsConnectRoomResponse(ByteBuffer _bb, ConnectRoomResponse obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; }
  public ConnectRoomResponse __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public String roomId() { int o = __offset(4); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer roomIdAsByteBuffer() { return __vector_as_bytebuffer(4, 1); }

  public static int createConnectRoomResponse(FlatBufferBuilder builder,
      int roomIdOffset) {
    builder.startObject(1);
    ConnectRoomResponse.addRoomId(builder, roomIdOffset);
    return ConnectRoomResponse.endConnectRoomResponse(builder);
  }

  public static void startConnectRoomResponse(FlatBufferBuilder builder) { builder.startObject(1); }
  public static void addRoomId(FlatBufferBuilder builder, int roomIdOffset) { builder.addOffset(0, roomIdOffset, 0); }
  public static int endConnectRoomResponse(FlatBufferBuilder builder) {
    int o = builder.endObject();
    builder.required(o, 4);  // roomId
    return o;
  }
  public static void finishConnectRoomResponseBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
}
