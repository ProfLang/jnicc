/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cbc_CbcCutGenerator */

#ifndef _Included_cbc_CbcCutGenerator
#define _Included_cbc_CbcCutGenerator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_generateTuning
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cbc_CbcCutGenerator_jni_1generateTuning
  (JNIEnv *, jclass, jlong);

/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_getCutGeneratorName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cbc_CbcCutGenerator_jni_1getCutGeneratorName
  (JNIEnv *, jclass, jlong);

/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_numberCutsInTotal
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cbc_CbcCutGenerator_jni_1numberCutsInTotal
  (JNIEnv *, jclass, jlong);

/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_numberCutsActive
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cbc_CbcCutGenerator_jni_1numberCutsActive
  (JNIEnv *, jclass, jlong);

/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_numberTimesEntered
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cbc_CbcCutGenerator_jni_1numberTimesEntered
  (JNIEnv *, jclass, jlong);

/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_refreshModel
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_cbc_CbcCutGenerator_jni_1refreshModel
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_setInaccuracy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_cbc_CbcCutGenerator_jni_1setInaccuracy
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_setNeedsOptimalBasis
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_cbc_CbcCutGenerator_jni_1setNeedsOptimalBasis
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_setNormal
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_cbc_CbcCutGenerator_jni_1setNormal
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_setSwitchOfIfLessThan
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_cbc_CbcCutGenerator_jni_1setSwitchOfIfLessThan
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_setWhatDepth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_cbc_CbcCutGenerator_jni_1setWhatDepth
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_timeInCutGenerator
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_cbc_CbcCutGenerator_jni_1timeInCutGenerator
  (JNIEnv *, jclass, jlong);

/*
 * Class:     cbc_CbcCutGenerator
 * Method:    jni_timing
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_cbc_CbcCutGenerator_jni_1timing
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
