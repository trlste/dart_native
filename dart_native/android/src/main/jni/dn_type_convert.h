//
// Created by Hui on 5/22/21.
//

#ifndef ANDROID_DN_TYPE_CONVERT_H
#define ANDROID_DN_TYPE_CONVERT_H

#include <jni.h>
#include <map>
#include <string>
#include <any>

#ifdef __cplusplus
extern "C" {
#endif

  /// convert c type to java type
  jint * IntToJint(void *value);
  jbyte * Int8ToJbyte(void *value);
  jshort * Int16ToJshort(void *value);
  jlong * Int64ToJlong(void *value);
  jchar * UInt16ToJchar(void *value);
  jboolean * UInt8ToJbool(void *value);
  jfloat * FloatToJfloat(void *value);
  jdouble * DoubleToJdouble(void *value);

  std::map<std::string, long> basicTypeConvertMap {
      {"I", (long) &IntToJint},
      {"B", (long) &Int8ToJbyte},
      {"S", (long) &Int16ToJshort},
      {"J", (long) &Int64ToJlong},
      {"C", (long) &UInt16ToJchar},
      {"Z", (long) &UInt8ToJbool},
      {"F", (long) &FloatToJfloat},
      {"D", (long) &DoubleToJdouble},
  };

#ifdef __cplusplus
}
#endif

#endif //ANDROID_DN_TYPE_CONVERT_H
