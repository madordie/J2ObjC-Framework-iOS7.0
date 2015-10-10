//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/SocketOption.java
//

#ifndef _JavaNetSocketOption_H_
#define _JavaNetSocketOption_H_

#include <j2objc/J2ObjC_header.h>

@class IOSClass;

/*!
 @brief An option associated with a socket.
 <p>See <code>java.nio.channels.NetworkChannel.setOption</code>,
 <code>java.nio.channels.NetworkChannel.getOption</code> and
 <code>java.nio.channels.NetworkChannel.supportedOptions</code> for methods that use SocketOption.
 <p>See <code>StandardSocketOptions</code> for valid SocketOptions.
 @since 1.7
  Until ready for a public API change
 */
@protocol JavaNetSocketOption < NSObject, JavaObject >

/*!
 @brief Returns the name of the option.
 */
- (NSString *)name;

/*!
 @brief Returns the type of the value of the option.
 */
- (IOSClass *)type;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocketOption)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocketOption)

#endif // _JavaNetSocketOption_H_