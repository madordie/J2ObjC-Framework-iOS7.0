//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/DefaultSSLServerSocketFactory.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxNetSslDefaultSSLServerSocketFactory_INCLUDE_ALL")
#ifdef JavaxNetSslDefaultSSLServerSocketFactory_RESTRICT
#define JavaxNetSslDefaultSSLServerSocketFactory_INCLUDE_ALL 0
#else
#define JavaxNetSslDefaultSSLServerSocketFactory_INCLUDE_ALL 1
#endif
#undef JavaxNetSslDefaultSSLServerSocketFactory_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslDefaultSSLServerSocketFactory_) && (JavaxNetSslDefaultSSLServerSocketFactory_INCLUDE_ALL || defined(JavaxNetSslDefaultSSLServerSocketFactory_INCLUDE))
#define JavaxNetSslDefaultSSLServerSocketFactory_

#define JavaxNetSslSSLServerSocketFactory_RESTRICT 1
#define JavaxNetSslSSLServerSocketFactory_INCLUDE 1
#include "../../../javax/net/ssl/SSLServerSocketFactory.h"

@class IOSObjectArray;
@class JavaNetInetAddress;
@class JavaNetServerSocket;

/*!
 @brief Default inoperative implementation of javax.net.ssl.SSLServerSocketFactory
 */
@interface JavaxNetSslDefaultSSLServerSocketFactory : JavaxNetSslSSLServerSocketFactory

#pragma mark Public

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port;

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port
                                           withInt:(jint)backlog;

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port
                                           withInt:(jint)backlog
                            withJavaNetInetAddress:(JavaNetInetAddress *)iAddress;

- (IOSObjectArray *)getDefaultCipherSuites;

- (IOSObjectArray *)getSupportedCipherSuites;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)mes;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslDefaultSSLServerSocketFactory)

FOUNDATION_EXPORT void JavaxNetSslDefaultSSLServerSocketFactory_initWithNSString_(JavaxNetSslDefaultSSLServerSocketFactory *self, NSString *mes);

FOUNDATION_EXPORT JavaxNetSslDefaultSSLServerSocketFactory *new_JavaxNetSslDefaultSSLServerSocketFactory_initWithNSString_(NSString *mes) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslDefaultSSLServerSocketFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxNetSslDefaultSSLServerSocketFactory_INCLUDE_ALL")
