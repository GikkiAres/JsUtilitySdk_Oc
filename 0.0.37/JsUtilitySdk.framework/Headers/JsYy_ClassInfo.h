//
//  JsYy_ClassInfo.h
//  JsYy_Model <https://github.com/ibireme/JsYy_Model>
//
//  Created by ibireme on 15/5/9.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Type encoding's type.
 */
typedef NS_OPTIONS(NSUInteger, JsYy_EncodingType) {
    JsYy_EncodingTypeMask       = 0xFF, ///< mask of type value
    JsYy_EncodingTypeUnknown    = 0, ///< unknown
    JsYy_EncodingTypeVoid       = 1, ///< void
    JsYy_EncodingTypeBool       = 2, ///< bool
    JsYy_EncodingTypeInt8       = 3, ///< char / BOOL
    JsYy_EncodingTypeUInt8      = 4, ///< unsigned char
    JsYy_EncodingTypeInt16      = 5, ///< short
    JsYy_EncodingTypeUInt16     = 6, ///< unsigned short
    JsYy_EncodingTypeInt32      = 7, ///< int
    JsYy_EncodingTypeUInt32     = 8, ///< unsigned int
    JsYy_EncodingTypeInt64      = 9, ///< long long
    JsYy_EncodingTypeUInt64     = 10, ///< unsigned long long
    JsYy_EncodingTypeFloat      = 11, ///< float
    JsYy_EncodingTypeDouble     = 12, ///< double
    JsYy_EncodingTypeLongDouble = 13, ///< long double
    JsYy_EncodingTypeObject     = 14, ///< id
    JsYy_EncodingTypeClass      = 15, ///< Class
    JsYy_EncodingTypeSEL        = 16, ///< SEL
    JsYy_EncodingTypeBlock      = 17, ///< block
    JsYy_EncodingTypePointer    = 18, ///< void*
    JsYy_EncodingTypeStruct     = 19, ///< struct
    JsYy_EncodingTypeUnion      = 20, ///< union
    JsYy_EncodingTypeCString    = 21, ///< char*
    JsYy_EncodingTypeCArray     = 22, ///< char[10] (for example)
    
    JsYy_EncodingTypeQualifierMask   = 0xFF00,   ///< mask of qualifier
    JsYy_EncodingTypeQualifierConst  = 1 << 8,  ///< const
    JsYy_EncodingTypeQualifierIn     = 1 << 9,  ///< in
    JsYy_EncodingTypeQualifierInout  = 1 << 10, ///< inout
    JsYy_EncodingTypeQualifierOut    = 1 << 11, ///< out
    JsYy_EncodingTypeQualifierBycopy = 1 << 12, ///< bycopy
    JsYy_EncodingTypeQualifierByref  = 1 << 13, ///< byref
    JsYy_EncodingTypeQualifierOneway = 1 << 14, ///< oneway
    
    JsYy_EncodingTypePropertyMask         = 0xFF0000, ///< mask of property
    JsYy_EncodingTypePropertyReadonly     = 1 << 16, ///< readonly
    JsYy_EncodingTypePropertyCopy         = 1 << 17, ///< copy
    JsYy_EncodingTypePropertyRetain       = 1 << 18, ///< retain
    JsYy_EncodingTypePropertyNonatomic    = 1 << 19, ///< nonatomic
    JsYy_EncodingTypePropertyWeak         = 1 << 20, ///< weak
    JsYy_EncodingTypePropertyCustomGetter = 1 << 21, ///< getter=
    JsYy_EncodingTypePropertyCustomSetter = 1 << 22, ///< setter=
    JsYy_EncodingTypePropertyDynamic      = 1 << 23, ///< @dynamic
};

/**
 Get the type from a Type-Encoding string.
 
 @discussion See also:
 https://developer.apple.com/library/mac/documentation/Cocoa/Conceptual/ObjCRuntimeGuide/Articles/ocrtTypeEncodings.html
 https://developer.apple.com/library/mac/documentation/Cocoa/Conceptual/ObjCRuntimeGuide/Articles/ocrtPropertyIntrospection.html
 
 @param typeEncoding  A Type-Encoding string.
 @return The encoding type.
 */
JsYy_EncodingType JsYy_EncodingGetType(const char *typeEncoding);


/**
 Instance variable information.
 */
@interface JsYy_ClassIvarInfo : NSObject
@property (nonatomic, assign, readonly) Ivar ivar;              ///< ivar opaque struct
@property (nonatomic, strong, readonly) NSString *name;         ///< Ivar's name
@property (nonatomic, assign, readonly) ptrdiff_t offset;       ///< Ivar's offset
@property (nonatomic, strong, readonly) NSString *typeEncoding; ///< Ivar's type encoding
@property (nonatomic, assign, readonly) JsYy_EncodingType type;    ///< Ivar's type

/**
 Creates and returns an ivar info object.
 
 @param ivar ivar opaque struct
 @return A new object, or nil if an error occurs.
 */
- (instancetype)initWithIvar:(Ivar)ivar;
@end


/**
 Method information.
 */
@interface JsYy_ClassMethodInfo : NSObject
@property (nonatomic, assign, readonly) Method method;                  ///< method opaque struct
@property (nonatomic, strong, readonly) NSString *name;                 ///< method name
@property (nonatomic, assign, readonly) SEL sel;                        ///< method's selector
@property (nonatomic, assign, readonly) IMP imp;                        ///< method's implementation
@property (nonatomic, strong, readonly) NSString *typeEncoding;         ///< method's parameter and return types
@property (nonatomic, strong, readonly) NSString *returnTypeEncoding;   ///< return value's type
@property (nullable, nonatomic, strong, readonly) NSArray<NSString *> *argumentTypeEncodings; ///< array of arguments' type

/**
 Creates and returns a method info object.
 
 @param method method opaque struct
 @return A new object, or nil if an error occurs.
 */
- (instancetype)initWithMethod:(Method)method;
@end


/**
 Property information.
 */
@interface JsYy_ClassPropertyInfo : NSObject
@property (nonatomic, assign, readonly) objc_property_t property; ///< property's opaque struct
@property (nonatomic, strong, readonly) NSString *name;           ///< property's name
@property (nonatomic, assign, readonly) JsYy_EncodingType type;      ///< property's type
@property (nonatomic, strong, readonly) NSString *typeEncoding;   ///< property's encoding value
@property (nonatomic, strong, readonly) NSString *ivarName;       ///< property's ivar name
@property (nullable, nonatomic, assign, readonly) Class cls;      ///< may be nil
@property (nullable, nonatomic, strong, readonly) NSArray<NSString *> *protocols; ///< may nil
@property (nonatomic, assign, readonly) SEL getter;               ///< getter (nonnull)
@property (nonatomic, assign, readonly) SEL setter;               ///< setter (nonnull)

/**
 Creates and returns a property info object.
 
 @param property property opaque struct
 @return A new object, or nil if an error occurs.
 */
- (instancetype)initWithProperty:(objc_property_t)property;
@end


/**
 Class information for a class.
 */
@interface JsYy_ClassInfo : NSObject
@property (nonatomic, assign, readonly) Class cls; ///< class object
@property (nullable, nonatomic, assign, readonly) Class superCls; ///< super class object
@property (nullable, nonatomic, assign, readonly) Class metaCls;  ///< class's meta class object
@property (nonatomic, readonly) BOOL isMeta; ///< whether this class is meta class
@property (nonatomic, strong, readonly) NSString *name; ///< class name
@property (nullable, nonatomic, strong, readonly) JsYy_ClassInfo *superClassInfo; ///< super class's class info
@property (nullable, nonatomic, strong, readonly) NSDictionary<NSString *, JsYy_ClassIvarInfo *> *ivarInfos; ///< ivars
@property (nullable, nonatomic, strong, readonly) NSDictionary<NSString *, JsYy_ClassMethodInfo *> *methodInfos; ///< methods
@property (nullable, nonatomic, strong, readonly) NSDictionary<NSString *, JsYy_ClassPropertyInfo *> *propertyInfos; ///< properties

/**
 If the class is changed (for example: you add a method to this class with
 'class_addMethod()'), you should call this method to refresh the class info cache.
 
 After called this method, `needUpdate` will returns `YES`, and you should call 
 'classInfoWithClass' or 'classInfoWithClassName' to get the updated class info.
 */
- (void)setNeedUpdate;

/**
 If this method returns `YES`, you should stop using this instance and call
 `classInfoWithClass` or `classInfoWithClassName` to get the updated class info.
 
 @return Whether this class info need update.
 */
- (BOOL)needUpdate;

/**
 Get the class info of a specified Class.
 
 @discussion This method will cache the class info and super-class info
 at the first access to the Class. This method is thread-safe.
 
 @param cls A class.
 @return A class info, or nil if an error occurs.
 */
+ (nullable instancetype)classInfoWithClass:(Class)cls;

/**
 Get the class info of a specified Class.
 
 @discussion This method will cache the class info and super-class info
 at the first access to the Class. This method is thread-safe.
 
 @param className A class name.
 @return A class info, or nil if an error occurs.
 */
+ (nullable instancetype)classInfoWithClassName:(NSString *)className;

@end

NS_ASSUME_NONNULL_END
