//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Runnable.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaLangRunnable_INCLUDE_ALL")
#ifdef JavaLangRunnable_RESTRICT
#define JavaLangRunnable_INCLUDE_ALL 0
#else
#define JavaLangRunnable_INCLUDE_ALL 1
#endif
#undef JavaLangRunnable_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangRunnable_) && (JavaLangRunnable_INCLUDE_ALL || defined(JavaLangRunnable_INCLUDE))
#define JavaLangRunnable_

/*!
 @brief Represents a command that can be executed.
 Often used to run code in a
 different <code>Thread</code>.
 */
@protocol JavaLangRunnable < NSObject, JavaObject >

/*!
 @brief Starts executing the active part of the class' code.
 This method is
 called when a thread is started that has been created with a class which
 implements <code>Runnable</code>.
 */
- (void)run;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRunnable)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRunnable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangRunnable_INCLUDE_ALL")
