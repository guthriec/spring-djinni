// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from proto.djinni

#import "DBRecordWithEmbeddedCppProto.h"
#include "RecordWithEmbeddedCppProto.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBRecordWithEmbeddedCppProto;

namespace djinni_generated {

struct RecordWithEmbeddedCppProto
{
    using CppType = ::testsuite::RecordWithEmbeddedCppProto;
    using ObjcType = DBRecordWithEmbeddedCppProto*;

    using Boxed = RecordWithEmbeddedCppProto;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
