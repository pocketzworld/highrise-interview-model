// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CLIENTMESSAGE_RS_HIGH_LIFE_FBS_H_
#define FLATBUFFERS_GENERATED_CLIENTMESSAGE_RS_HIGH_LIFE_FBS_H_

#include "flatbuffers/flatbuffers.h"

#include "ConnectRoomRequest_generated.h"
#include "VWChatEvent_generated.h"

namespace rs {
namespace high {
namespace life {
namespace fbs {

struct ClientMessage;

enum AnyClientContent {
  AnyClientContent_NONE = 0,
  AnyClientContent_ConnectRoomRequest = 1,
  AnyClientContent_VWChatEvent = 2,
  AnyClientContent_MIN = AnyClientContent_NONE,
  AnyClientContent_MAX = AnyClientContent_VWChatEvent
};

inline AnyClientContent (&EnumValuesAnyClientContent())[3] {
  static AnyClientContent values[] = {
    AnyClientContent_NONE,
    AnyClientContent_ConnectRoomRequest,
    AnyClientContent_VWChatEvent
  };
  return values;
}

inline const char **EnumNamesAnyClientContent() {
  static const char *names[] = {
    "NONE",
    "ConnectRoomRequest",
    "VWChatEvent",
    nullptr
  };
  return names;
}

inline const char *EnumNameAnyClientContent(AnyClientContent e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesAnyClientContent()[index];
}

template<typename T> struct AnyClientContentTraits {
  static const AnyClientContent enum_value = AnyClientContent_NONE;
};

template<> struct AnyClientContentTraits<rs::high::life::fbs::ConnectRoomRequest> {
  static const AnyClientContent enum_value = AnyClientContent_ConnectRoomRequest;
};

template<> struct AnyClientContentTraits<rs::high::life::fbs::VWChatEvent> {
  static const AnyClientContent enum_value = AnyClientContent_VWChatEvent;
};

bool VerifyAnyClientContent(flatbuffers::Verifier &verifier, const void *obj, AnyClientContent type);
bool VerifyAnyClientContentVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

struct ClientMessage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_CONTENT_TYPE = 4,
    VT_CONTENT = 6
  };
  AnyClientContent content_type() const {
    return static_cast<AnyClientContent>(GetField<uint8_t>(VT_CONTENT_TYPE, 0));
  }
  const void *content() const {
    return GetPointer<const void *>(VT_CONTENT);
  }
  template<typename T> const T *content_as() const;
  const rs::high::life::fbs::ConnectRoomRequest *content_as_ConnectRoomRequest() const {
    return content_type() == AnyClientContent_ConnectRoomRequest ? static_cast<const rs::high::life::fbs::ConnectRoomRequest *>(content()) : nullptr;
  }
  const rs::high::life::fbs::VWChatEvent *content_as_VWChatEvent() const {
    return content_type() == AnyClientContent_VWChatEvent ? static_cast<const rs::high::life::fbs::VWChatEvent *>(content()) : nullptr;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_CONTENT_TYPE) &&
           VerifyOffsetRequired(verifier, VT_CONTENT) &&
           VerifyAnyClientContent(verifier, content(), content_type()) &&
           verifier.EndTable();
  }
};

template<> inline const rs::high::life::fbs::ConnectRoomRequest *ClientMessage::content_as<rs::high::life::fbs::ConnectRoomRequest>() const {
  return content_as_ConnectRoomRequest();
}

template<> inline const rs::high::life::fbs::VWChatEvent *ClientMessage::content_as<rs::high::life::fbs::VWChatEvent>() const {
  return content_as_VWChatEvent();
}

struct ClientMessageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_content_type(AnyClientContent content_type) {
    fbb_.AddElement<uint8_t>(ClientMessage::VT_CONTENT_TYPE, static_cast<uint8_t>(content_type), 0);
  }
  void add_content(flatbuffers::Offset<void> content) {
    fbb_.AddOffset(ClientMessage::VT_CONTENT, content);
  }
  ClientMessageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ClientMessageBuilder &operator=(const ClientMessageBuilder &);
  flatbuffers::Offset<ClientMessage> Finish() {
    const auto end = fbb_.EndTable(start_, 2);
    auto o = flatbuffers::Offset<ClientMessage>(end);
    fbb_.Required(o, ClientMessage::VT_CONTENT);
    return o;
  }
};

inline flatbuffers::Offset<ClientMessage> CreateClientMessage(
    flatbuffers::FlatBufferBuilder &_fbb,
    AnyClientContent content_type = AnyClientContent_NONE,
    flatbuffers::Offset<void> content = 0) {
  ClientMessageBuilder builder_(_fbb);
  builder_.add_content(content);
  builder_.add_content_type(content_type);
  return builder_.Finish();
}

inline bool VerifyAnyClientContent(flatbuffers::Verifier &verifier, const void *obj, AnyClientContent type) {
  switch (type) {
    case AnyClientContent_NONE: {
      return true;
    }
    case AnyClientContent_ConnectRoomRequest: {
      auto ptr = reinterpret_cast<const rs::high::life::fbs::ConnectRoomRequest *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case AnyClientContent_VWChatEvent: {
      auto ptr = reinterpret_cast<const rs::high::life::fbs::VWChatEvent *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return false;
  }
}

inline bool VerifyAnyClientContentVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyAnyClientContent(
        verifier,  values->Get(i), types->GetEnum<AnyClientContent>(i))) {
      return false;
    }
  }
  return true;
}

inline const rs::high::life::fbs::ClientMessage *GetClientMessage(const void *buf) {
  return flatbuffers::GetRoot<rs::high::life::fbs::ClientMessage>(buf);
}

inline bool VerifyClientMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<rs::high::life::fbs::ClientMessage>(nullptr);
}

inline void FinishClientMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<rs::high::life::fbs::ClientMessage> root) {
  fbb.Finish(root);
}

}  // namespace fbs
}  // namespace life
}  // namespace high
}  // namespace rs

#endif  // FLATBUFFERS_GENERATED_CLIENTMESSAGE_RS_HIGH_LIFE_FBS_H_