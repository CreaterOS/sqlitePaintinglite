//
//  PaintingliteException.h
//  Paintinglite
//
//  Created by Bryant Reyn on 2020/5/29.
//  Copyright © 2020 Bryant Reyn. All rights reserved.
//
/*!
 @header PaintingliteException
 @abstract PaintingliteException 提供SDK框架中异常处理
 @author CreaterOS
 @version 1.00 2020/5/29 Creation (此文档的版本信息)
 */
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/*!
 @class PaintingliteException
 @abstract PaintingliteException 提供SDK框架中异常处理
 */
@interface PaintingliteException : NSException

/*!
 @method paintingliteException: reason:
 @abstract 异常处理报错
 @discussion 异常处理报错
 @param exceptionWithName 异常名称
 @param reason 异常原因
 */
+ (void)paintingliteException:(NSString *)exceptionWithName reason:(NSString *)reason;


/*!
 @method paintingliteDictException:
 @abstract 异常处理报错
 @discussion 异常处理报错
 @param info 异常字典
 */
+ (void)paintingliteDictException:(NSDictionary *)info;

/*!
 @method paintingliteXMLException: reason:
 @abstract 解析XML异常处理报错
 @discussion 解析XML报错异常处理报错
 @param exceptionWithName 异常名称
 @param reason 异常原因
 */
+ (void)paintingliteXMLException:(NSString *)exceptionWithName reason:(NSString *)reason;

@end

NS_ASSUME_NONNULL_END
