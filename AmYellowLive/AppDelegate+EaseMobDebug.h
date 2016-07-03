//
//  AppDelegate+EaseMobDebug.h
//  AmYellowLive
//
//  Created by uuzuche on 16/7/3.
//  Copyright © 2016年 uuzuche. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate (EaseMobDebug)

/*!
 *  @brief 判断是否开启了测试模式，本类以及本方法开发者不需要集成使用，直接调用registerSDKWithAppKey:apnsCertName:otherConfig即可
 *  @return 返回结果
 *  @remark 本类以及本方法开发者不需要集成使用
 */
-(BOOL)isSpecifyServer;


@end
