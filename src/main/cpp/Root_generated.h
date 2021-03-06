// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ROOT_RS_HIGH_LIFE_FBS_H_
#define FLATBUFFERS_GENERATED_ROOT_RS_HIGH_LIFE_FBS_H_

#include "flatbuffers/flatbuffers.h"

namespace rs {
namespace high {
namespace life {
namespace fbs {

struct HRRoot;

struct HRRoot FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct HRRootBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  HRRootBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  HRRootBuilder &operator=(const HRRootBuilder &);
  flatbuffers::Offset<HRRoot> Finish() {
    const auto end = fbb_.EndTable(start_, 0);
    auto o = flatbuffers::Offset<HRRoot>(end);
    return o;
  }
};

inline flatbuffers::Offset<HRRoot> CreateHRRoot(
    flatbuffers::FlatBufferBuilder &_fbb) {
  HRRootBuilder builder_(_fbb);
  return builder_.Finish();
}

inline const rs::high::life::fbs::HRRoot *GetHRRoot(const void *buf) {
  return flatbuffers::GetRoot<rs::high::life::fbs::HRRoot>(buf);
}

inline bool VerifyHRRootBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<rs::high::life::fbs::HRRoot>(nullptr);
}

inline void FinishHRRootBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<rs::high::life::fbs::HRRoot> root) {
  fbb.Finish(root);
}

}  // namespace fbs
}  // namespace life
}  // namespace high
}  // namespace rs

#endif  // FLATBUFFERS_GENERATED_ROOT_RS_HIGH_LIFE_FBS_H_
