//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/InetUnixAddress.java
//

#ifndef _JavaNetInetUnixAddress_H_
#define _JavaNetInetUnixAddress_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/net/InetAddress.h>

@class IOSByteArray;

/*!
 @brief An AF_UNIX address.
 See <code>InetAddress</code>.
 */
@interface JavaNetInetUnixAddress : JavaNetInetAddress

#pragma mark Public

/*!
 @brief Constructs an AF_UNIX InetAddress for the given path.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)path;

/*!
 @brief Constructs an AF_UNIX InetAddress for the given path.
 */
- (instancetype)initWithNSString:(NSString *)path;

/*!
 @brief Returns a string form of this InetAddress.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetInetUnixAddress)

FOUNDATION_EXPORT void JavaNetInetUnixAddress_initWithNSString_(JavaNetInetUnixAddress *self, NSString *path);

FOUNDATION_EXPORT JavaNetInetUnixAddress *new_JavaNetInetUnixAddress_initWithNSString_(NSString *path) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetInetUnixAddress_initWithByteArray_(JavaNetInetUnixAddress *self, IOSByteArray *path);

FOUNDATION_EXPORT JavaNetInetUnixAddress *new_JavaNetInetUnixAddress_initWithByteArray_(IOSByteArray *path) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInetUnixAddress)

#endif // _JavaNetInetUnixAddress_H_