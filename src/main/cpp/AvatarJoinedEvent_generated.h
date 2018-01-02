// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_AVATARJOINEDEVENT_RS_HIGH_LIFE_FBS_H_
#define FLATBUFFERS_GENERATED_AVATARJOINEDEVENT_RS_HIGH_LIFE_FBS_H_

#include "flatbuffers/flatbuffers.h"

#include "Avatar_generated.h"

namespace rs {
namespace high {
namespace life {
namespace fbs {

struct AvatarJoinedEvent;

struct AvatarJoinedEvent FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_AVATAR = 4
  };
  const rs::high::life::fbs::Avatar *avatar() const {
    return GetPointer<const rs::high::life::fbs::Avatar *>(VT_AVATAR);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_AVATAR) &&
           verifier.VerifyTable(avatar()) &&
           verifier.EndTable();
  }
};

struct AvatarJoinedEventBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_avatar(flatbuffers::Offset<rs::high::life::fbs::Avatar> avatar) {
    fbb_.AddOffset(AvatarJoinedEvent::VT_AVATAR, avatar);
  }
  AvatarJoinedEventBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AvatarJoinedEventBuilder &operator=(const AvatarJoinedEventBuilder &);
  flatbuffers::Offset<AvatarJoinedEvent> Finish() {
    const auto end = fbb_.EndTable(start_, 1);
    auto o = flatbuffers::Offset<AvatarJoinedEvent>(end);
    fbb_.Required(o, AvatarJoinedEvent::VT_AVATAR);
    return o;
  }
};

inline flatbuffers::Offset<AvatarJoinedEvent> CreateAvatarJoinedEvent(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<rs::high::life::fbs::Avatar> avatar = 0) {
  AvatarJoinedEventBuilder builder_(_fbb);
  builder_.add_avatar(avatar);
  return builder_.Finish();
}

inline const rs::high::life::fbs::AvatarJoinedEvent *GetAvatarJoinedEvent(const void *buf) {
  return flatbuffers::GetRoot<rs::high::life::fbs::AvatarJoinedEvent>(buf);
}

inline bool VerifyAvatarJoinedEventBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<rs::high::life::fbs::AvatarJoinedEvent>(nullptr);
}

inline void FinishAvatarJoinedEventBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<rs::high::life::fbs::AvatarJoinedEvent> root) {
  fbb.Finish(root);
}

}  // namespace fbs
}  // namespace life
}  // namespace high
}  // namespace rs

#endif  // FLATBUFFERS_GENERATED_AVATARJOINEDEVENT_RS_HIGH_LIFE_FBS_H_