//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/Key.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityKey_INCLUDE_ALL")
#ifdef JavaSecurityKey_RESTRICT
#define JavaSecurityKey_INCLUDE_ALL 0
#else
#define JavaSecurityKey_INCLUDE_ALL 1
#endif
#undef JavaSecurityKey_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityKey_) && (JavaSecurityKey_INCLUDE_ALL || defined(JavaSecurityKey_INCLUDE))
#define JavaSecurityKey_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

@class IOSByteArray;

/*!
 @brief <code>Key</code> is the common interface for all keys.
 - seealso: PublicKey
 - seealso: PrivateKey
 */
@protocol JavaSecurityKey < JavaIoSerializable, NSObject, JavaObject >

/*!
 @brief Returns the name of the algorithm of this key.
 If the algorithm is
 unknown, <code>null</code> is returned.
 @return the name of the algorithm of this key or <code>null</code> if the
 algorithm is unknown.
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns the name of the format used to encode this key, or <code>null</code>
 if it can not be encoded.
 @return the name of the format used to encode this key, or <code>null</code>
 if it can not be encoded.
 */
- (NSString *)getFormat;

/*!
 @brief Returns the encoded form of this key, or <code>null</code> if encoding is not
 supported by this key.
 @return the encoded form of this key, or <code>null</code> if encoding is not
 supported by this key.
 */
- (IOSByteArray *)getEncoded;

@end

@interface JavaSecurityKey : NSObject

+ (jlong)serialVersionUID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKey)

/*!
 @brief The <code>serialVersionUID</code> to be compatible with JDK1.1.
 */
inline jlong JavaSecurityKey_get_serialVersionUID();
#define JavaSecurityKey_serialVersionUID 6603384152749567654LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityKey_INCLUDE_ALL")
