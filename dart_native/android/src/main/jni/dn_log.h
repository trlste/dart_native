//
// Created by Hui on 5/22/21.
//
#ifndef ANDROID_DN_LOG_H
#define ANDROID_DN_LOG_H

#include <android/log.h>

#ifdef __cplusplus
extern "C" {
#endif

  #define DNDebugLog(...)  __android_log_print(ANDROID_LOG_DEBUG, "DartNative", __VA_ARGS__)
  #define DNInfoLog(...)  __android_log_print(ANDROID_LOG_INFO, "DartNative", __VA_ARGS__)
  #define DNErrorLog(...)  __android_log_print(ANDROID_LOG_ERROR, "DartNative", __VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif //ANDROID_DN_LOG_H
