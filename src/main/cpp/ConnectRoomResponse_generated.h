// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CONNECTROOMRESPONSE_RS_HIGH_LIFE_FBS_H_
#define FLATBUFFERS_GENERATED_CONNECTROOMRESPONSE_RS_HIGH_LIFE_FBS_H_

#include "flatbuffers/flatbuffers.h"

namespace rs {
namespace high {
namespace life {
namespace fbs {

struct ConnectRoomResponse;

struct ConnectRoomResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ROOMID = 4
  };
  const flatbuffers::String *roomId() const {
    return GetPointer<const flatbuffers::String *>(VT_ROOMID);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_ROOMID) &&
           verifier.Verify(roomId()) &&
           verifier.EndTable();
  }
};

struct ConnectRoomResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_roomId(flatbuffers::Offset<flatbuffers::String> roomId) {
    fbb_.AddOffset(ConnectRoomResponse::VT_ROOMID, roomId);
  }
  ConnectRoomResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ConnectRoomResponseBuilder &operator=(const ConnectRoomResponseBuilder &);
  flatbuffers::Offset<ConnectRoomResponse> Finish() {
    const auto end = fbb_.EndTable(start_, 1);
    auto o = flatbuffers::Offset<ConnectRoomResponse>(end);
    fbb_.Required(o, ConnectRoomResponse::VT_ROOMID);
    return o;
  }
};

inline flatbuffers::Offset<ConnectRoomResponse> CreateConnectRoomResponse(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> roomId = 0) {
  ConnectRoomResponseBuilder builder_(_fbb);
  builder_.add_roomId(roomId);
  return builder_.Finish();
}

inline flatbuffers::Offset<ConnectRoomResponse> CreateConnectRoomResponseDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *roomId = nullptr) {
  return rs::high::life::fbs::CreateConnectRoomResponse(
      _fbb,
      roomId ? _fbb.CreateString(roomId) : 0);
}

inline const rs::high::life::fbs::ConnectRoomResponse *GetConnectRoomResponse(const void *buf) {
  return flatbuffers::GetRoot<rs::high::life::fbs::ConnectRoomResponse>(buf);
}

inline bool VerifyConnectRoomResponseBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<rs::high::life::fbs::ConnectRoomResponse>(nullptr);
}

inline void FinishConnectRoomResponseBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<rs::high::life::fbs::ConnectRoomResponse> root) {
  fbb.Finish(root);
}

}  // namespace fbs
}  // namespace life
}  // namespace high
}  // namespace rs

#endif  // FLATBUFFERS_GENERATED_CONNECTROOMRESPONSE_RS_HIGH_LIFE_FBS_H_
