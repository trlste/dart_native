//
// Created by Hui on 5/22/21.
//

#ifndef ANDROID_DN_METHOD_CALL_H
#define ANDROID_DN_METHOD_CALL_H

#include <jni.h>
#include <string>
#include <map>

#ifdef __cplusplus
extern "C" {
#endif

    #define CALL_NATIVE_METHOD(_jenv, _jname, _jobject, _jmethod, _jvalue)                             \
        _jenv->Call##_jname##MethodA(_jobject, _jmethod, _jvalue)

    #define CALL_STATIC_NATIVE_METHOD(_jenv, _jname, _jobject, _jmethod, _jvalue)                             \
        _jenv->CallStatic##_jname##MethodA(_jobject, _jmethod, _jvalue)

    void CallNativeVoidMethod();
    void CallNativeCharMethod();
    void CallNativeByteMethod();
    void CallNativeShortMethod();
    void CallNativeLongMethod();
    void CallNativeIntMethod();
    void CallNativeBoolMethod();
    void CallNativeFloatMethod();
    void CallNativeDoubleMethod();

    std::map<std::string, long> callNativeMethodMap {
        {"I", (long) &CallNativeIntMethod},
        {"B", (long) &CallNativeByteMethod},
        {"S", (long) &CallNativeShortMethod},
        {"J", (long) &CallNativeLongMethod},
        {"C", (long) &CallNativeCharMethod},
        {"Z", (long) &CallNativeBoolMethod},
        {"F", (long) &CallNativeFloatMethod},
        {"D", (long) &CallNativeDoubleMethod},
        {"V", (long) &CallNativeVoidMethod}
    };

    void callStaticNativeVoidMethod();
    void callStaticNativeCharMethod();
    void callStaticNativeByteMethod();
    void callStaticNativeShortMethod();
    void callStaticNativeLongMethod();
    void callStaticNativeIntMethod();
    void callStaticNativeBoolMethod();
    void callStaticNativeFloatMethod();
    void callStaticNativeDoubleMethod();

#ifdef __cplusplus
}
#endif

#endif //ANDROID_DN_METHOD_CALL_H
