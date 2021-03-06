//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/ParameterizedType.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaLangReflectParameterizedType_INCLUDE_ALL")
#ifdef JavaLangReflectParameterizedType_RESTRICT
#define JavaLangReflectParameterizedType_INCLUDE_ALL 0
#else
#define JavaLangReflectParameterizedType_INCLUDE_ALL 1
#endif
#undef JavaLangReflectParameterizedType_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangReflectParameterizedType_) && (JavaLangReflectParameterizedType_INCLUDE_ALL || defined(JavaLangReflectParameterizedType_INCLUDE))
#define JavaLangReflectParameterizedType_

#define JavaLangReflectType_RESTRICT 1
#define JavaLangReflectType_INCLUDE 1
#include "../../../java/lang/reflect/Type.h"

@class IOSObjectArray;

/*!
 @brief This interface represents a parameterized type such as <code>'Set&lt;String&gt;'</code>
 .
 @since 1.5
 */
@protocol JavaLangReflectParameterizedType < JavaLangReflectType, NSObject, JavaObject >

/*!
 @brief Returns an array of the actual type arguments for this type.
 <p>
 If this type models a non parameterized type nested within a
 parameterized type, this method returns a zero length array. The generic
 type of the following <code>field</code> declaration is an example for a
 parameterized type without type arguments.
 @code

  A&lt;String&gt;.B field;
  class A&lt;T&gt; {
     class B {
     }
  
@endcode
 @return the actual type arguments
 @throws TypeNotPresentException
 if one of the type arguments cannot be found
 @throws MalformedParameterizedTypeException
 if one of the type arguments cannot be instantiated for some
 reason
 */
- (IOSObjectArray *)getActualTypeArguments;

/*!
 @brief Returns the parent / owner type, if this type is an inner type, otherwise
 <code>null</code> is returned if this is a top-level type.
 @return the owner type or <code>null</code> if this is a top-level type
 @throws TypeNotPresentException
 if one of the type arguments cannot be found
 @throws MalformedParameterizedTypeException
 if the owner type cannot be instantiated for some reason
 */
- (id<JavaLangReflectType>)getOwnerType;

/*!
 @brief Returns the declaring type of this parameterized type.
 <p>
 The raw type of <code>Set<String> field;</code> is <code>Set</code>.
 @return the raw type of this parameterized type
 */
- (id<JavaLangReflectType>)getRawType;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectParameterizedType)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectParameterizedType)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangReflectParameterizedType_INCLUDE_ALL")
