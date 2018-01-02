// automatically generated by the FlatBuffers compiler, do not modify

package rs.high.life.fbs;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class ClientMessage extends Table {
  public static ClientMessage getRootAsClientMessage(ByteBuffer _bb) { return getRootAsClientMessage(_bb, new ClientMessage()); }
  public static ClientMessage getRootAsClientMessage(ByteBuffer _bb, ClientMessage obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; }
  public ClientMessage __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public byte contentType() { int o = __offset(4); return o != 0 ? bb.get(o + bb_pos) : 0; }
  public Table content(Table obj) { int o = __offset(6); return o != 0 ? __union(obj, o) : null; }

  public static int createClientMessage(FlatBufferBuilder builder,
      byte content_type,
      int contentOffset) {
    builder.startObject(2);
    ClientMessage.addContent(builder, contentOffset);
    ClientMessage.addContentType(builder, content_type);
    return ClientMessage.endClientMessage(builder);
  }

  public static void startClientMessage(FlatBufferBuilder builder) { builder.startObject(2); }
  public static void addContentType(FlatBufferBuilder builder, byte contentType) { builder.addByte(0, contentType, 0); }
  public static void addContent(FlatBufferBuilder builder, int contentOffset) { builder.addOffset(1, contentOffset, 0); }
  public static int endClientMessage(FlatBufferBuilder builder) {
    int o = builder.endObject();
    builder.required(o, 6);  // content
    return o;
  }
  public static void finishClientMessageBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
}
