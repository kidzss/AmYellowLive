//
//  AppDelegate.h
//  AmYellowLive
//
//  Created by uuzuche on 16/7/3.
//  Copyright © 2016年 uuzuche. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewController.h"
#import "ApplyViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, EMChatManagerDelegate>
{
    EMConnectionState _connectionState;
}

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) MainViewController *mainController;

@end

