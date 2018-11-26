//
//  CustomTool.h
//  CDDStoreDemo
//
//  Created by 张张寿华 on 2018/11/19.
//  Copyright © 2018 RocketsChen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CustomTool : NSObject
+(instancetype)ShareCustom;
//是否是iphone x/xr/xs/xs max
-(BOOL)isiPhoneXP;
//字符串是否为空
-(BOOL)isEmptyWith:(NSString *)str;
//是否电话号码
-(BOOL)isPhoneNumWith:(NSString *)PhoneNum;
//是否是邮箱
-(BOOL)isEmailWith:(NSString *)email;
//获取当前时间
-(NSString *)GetCurrentDateWith:(NSString *)format;
//距离上次时间距离现在多久 比如几天前  xx小时前
-(NSString *)timeIntervalFromLastTime:(NSString *)lastTime
                       lastTimeFormat:(NSString *)format1
                        ToCurrentTime:(NSString *)currentTime
                    currentTimeFormat:(NSString *)format2;
//将图片压缩到指定尺寸
-(UIImage *)compressOriginalImage:(UIImage *)image toSize:(CGSize)size;

@end

NS_ASSUME_NONNULL_END
