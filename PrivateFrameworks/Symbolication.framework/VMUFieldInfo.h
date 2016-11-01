/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUFieldInfo : NSObject {
    VMUClassInfo * _destinationLayout;
    unsigned int  _flags;
    NSString * _ivarName;
    unsigned int  _offset;
    unsigned int  _scanType;
    unsigned int  _scannable;
    unsigned int  _size;
    unsigned int  _stride;
    NSArray * _subFieldArray;
    NSString * _typeName;
}

@property (readonly) VMUClassInfo *destinationLayout;
@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, readonly) bool isArrayEntries;
@property (nonatomic, readonly) bool isArraySize;
@property (nonatomic, readonly) bool isByref;
@property (nonatomic, readonly) bool isCapture;
@property (nonatomic, readonly) bool isKeyField;
@property (nonatomic, readonly) bool isKeysPointer;
@property (nonatomic, readonly) bool isStorageBitmapPointer;
@property (nonatomic, readonly) bool isStorageImplPointer;
@property (nonatomic, readonly) bool isValueField;
@property (nonatomic, readonly) bool isValuesPointer;
@property (readonly) NSString *ivarName;
@property (readonly) unsigned int offset;
@property (readonly) unsigned int scanType;
@property (readonly) unsigned int scannableSize;
@property (readonly) unsigned int size;
@property (readonly) unsigned int stride;
@property (readonly) NSArray *subFieldArray;
@property (readonly) NSString *typeName;
@property (readonly) NSString *typedDescription;

- (id)_getFieldAtOffset:(unsigned int)arg1;
- (void)_setDestinationLayout:(id)arg1;
- (void)_setFlags:(unsigned int)arg1;
- (void)_setIvarName:(id)arg1;
- (void)_setOffset:(unsigned int)arg1;
- (void)_setScanType:(unsigned int)arg1;
- (void)_setScannableSize:(unsigned int)arg1;
- (void)_setSize:(unsigned int)arg1;
- (void)_setStride:(unsigned int)arg1;
- (void)_setTypeName:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationLayout;
- (unsigned int)flags;
- (id)getLeafFieldAtOffset:(unsigned int)arg1 leafOffset:(unsigned int*)arg2;
- (unsigned long long)hash;
- (id)initStorageEntryFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initStorageInfoFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initWithName:(id)arg1 type:(id)arg2 scan:(unsigned int)arg3 offset:(unsigned int)arg4 size:(unsigned int)arg5;
- (id)initWithObjcIvar:(struct objc_ivar { }*)arg1 size:(unsigned int)arg2 isARC:(bool)arg3 is64Bit:(bool)arg4;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3;
- (bool)isArrayEntries;
- (bool)isArraySize;
- (bool)isByref;
- (bool)isCapture;
- (bool)isEqual:(id)arg1;
- (bool)isKeyField;
- (bool)isKeysPointer;
- (bool)isStorageBitmapPointer;
- (bool)isStorageImplPointer;
- (bool)isValueField;
- (bool)isValuesPointer;
- (id)ivarName;
- (id)mutableCopy;
- (unsigned int)offset;
- (unsigned int)scanType;
- (unsigned int)scannableSize;
- (void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned int)arg3;
- (unsigned int)size;
- (unsigned int)stride;
- (id)subFieldArray;
- (id)typeName;
- (id)typedDescription;

@end