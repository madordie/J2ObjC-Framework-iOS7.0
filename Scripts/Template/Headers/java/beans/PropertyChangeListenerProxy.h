//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/beans/PropertyChangeListenerProxy.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaBeansPropertyChangeListenerProxy_INCLUDE_ALL")
#ifdef JavaBeansPropertyChangeListenerProxy_RESTRICT
#define JavaBeansPropertyChangeListenerProxy_INCLUDE_ALL 0
#else
#define JavaBeansPropertyChangeListenerProxy_INCLUDE_ALL 1
#endif
#undef JavaBeansPropertyChangeListenerProxy_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaBeansPropertyChangeListenerProxy_) && (JavaBeansPropertyChangeListenerProxy_INCLUDE_ALL || defined(JavaBeansPropertyChangeListenerProxy_INCLUDE))
#define JavaBeansPropertyChangeListenerProxy_

#define JavaUtilEventListenerProxy_RESTRICT 1
#define JavaUtilEventListenerProxy_INCLUDE 1
#include "../../java/util/EventListenerProxy.h"

#define JavaBeansPropertyChangeListener_RESTRICT 1
#define JavaBeansPropertyChangeListener_INCLUDE 1
#include "../../java/beans/PropertyChangeListener.h"

@class JavaBeansPropertyChangeEvent;

/*!
 @brief The implementation of this listener proxy just delegates the received events
 to its listener.
 */
@interface JavaBeansPropertyChangeListenerProxy : JavaUtilEventListenerProxy < JavaBeansPropertyChangeListener > {
 @public
  NSString *propertyName_;
}

#pragma mark Public

/*!
 @brief Creates a new listener proxy that associates a listener with a property
 name.
 @param propertyName
 the name of the associated property.
 @param listener
 the listener to delegate incoming events to.
 */
- (instancetype)initWithNSString:(NSString *)propertyName
withJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)listener;

/*!
 @brief Returns the name of the property associated with this listener proxy.
 @return the name of the associated property.
 */
- (NSString *)getPropertyName;

- (void)propertyChangeWithJavaBeansPropertyChangeEvent:(JavaBeansPropertyChangeEvent *)event;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansPropertyChangeListenerProxy)

J2OBJC_FIELD_SETTER(JavaBeansPropertyChangeListenerProxy, propertyName_, NSString *)

FOUNDATION_EXPORT void JavaBeansPropertyChangeListenerProxy_initWithNSString_withJavaBeansPropertyChangeListener_(JavaBeansPropertyChangeListenerProxy *self, NSString *propertyName, id<JavaBeansPropertyChangeListener> listener);

FOUNDATION_EXPORT JavaBeansPropertyChangeListenerProxy *new_JavaBeansPropertyChangeListenerProxy_initWithNSString_withJavaBeansPropertyChangeListener_(NSString *propertyName, id<JavaBeansPropertyChangeListener> listener) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansPropertyChangeListenerProxy)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaBeansPropertyChangeListenerProxy_INCLUDE_ALL")
