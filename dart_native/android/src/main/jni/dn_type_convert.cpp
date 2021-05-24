//
// Created by Hui on 5/22/21.
//
#include "dn_type_convert.h"

jint * IntToJint(void *value) {
  return reinterpret_cast<jint *>((int *) value);
}

jbyte * Int8ToJbyte(void *value) {
  return reinterpret_cast<jbyte *>((int8_t *) value);
}

jshort * Int16ToJshort(void *value) {
  return reinterpret_cast<jshort *>((int16_t *) value);
}

jlong * Int64ToJlong(void *value) {
  return reinterpret_cast<jlong *>((int64_t *) value);
}

jchar * UInt16ToJchar(void *value) {
  return reinterpret_cast<jchar *>((char *) value);
}

jboolean * UInt8ToJbool(void *value) {
  return reinterpret_cast<jboolean *>((int *) value);
}

jfloat * FloatToJfloat(void *value) {
  return reinterpret_cast<jfloat *>((float *) value);
}

jdouble * DoubleToJdouble(void *value) {
  return reinterpret_cast<jdouble *>((double *) value);
}
