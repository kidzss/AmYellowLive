//
//  AppDelegate+EaseMob.h
//  AmYellowLive
//
//  Created by uuzuche on 16/7/3.
//  Copyright © 2016年 uuzuche. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate (EaseMob)

- (void)easemobApplication:(UIApplication *)application
didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
                    appkey:(NSString *)appkey
              apnsCertName:(NSString *)apnsCertName
               otherConfig:(NSDictionary *)otherConfig;

@end
