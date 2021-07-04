//
//  DNMethodIMP.h
//  DartNative
//
//  Created by 杨萧玉 on 2019/10/30.
//

#import <Foundation/Foundation.h>
#import "dart_api_dl.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (*NativeMethodCallback)(void *_Nullable *_Null_unspecified args,
                                    void *ret,
                                    int numberOfArguments,
                                    const char *_Nonnull *_Nonnull types,
                                    BOOL stret);

@interface DNMethodIMP : NSObject

@property (nonatomic, readonly) NativeMethodCallback callback;
@property (nonatomic, getter=hasStret, readonly) BOOL stret;
// Set of dart port when method is registerd on multi-isolates.
@property (nonatomic, readonly) NSSet<NSNumber *> *dartPorts;
@property (nonatomic, readonly) Dart_Port dartPort;

- (instancetype)initWithTypeEncoding:(const char *)typeEncodings
                            callback:(NativeMethodCallback)callback
                            dartPort:(Dart_Port)dartPort
                               error:(NSError **)error;
- (IMP)imp;
- (NSSet<NSNumber *> *)dartPorts;
- (void)addDartPort:(Dart_Port)port;

@end

NS_ASSUME_NONNULL_END
