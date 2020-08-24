// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from proto.djinni

#pragma once

#include "RecordWithEmbeddedProto.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeRecordWithEmbeddedProto final {
public:
    using CppType = ::testsuite::RecordWithEmbeddedProto;
    using JniType = jobject;

    using Boxed = NativeRecordWithEmbeddedProto;

    ~NativeRecordWithEmbeddedProto();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeRecordWithEmbeddedProto();
    friend ::djinni::JniClass<NativeRecordWithEmbeddedProto>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/RecordWithEmbeddedProto") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ldjinni/test/Test$Person;)V") };
    const jfieldID field_mPerson { ::djinni::jniGetFieldID(clazz.get(), "mPerson", "Ldjinni/test/Test$Person;") };
};

}  // namespace djinni_generated
