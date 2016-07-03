//
//  ViewController.m
//  AmYellowLive
//
//  Created by uuzuche on 16/7/3.
//  Copyright © 2016年 uuzuche. All rights reserved.
//

#import "ViewController.h"
#import "UcCameraView.h"

@interface ViewController ()
{
    UcCameraView *_cameraView;
}

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    _cameraView = [[UcCameraView alloc] initWithStreamID:@"amyellow888"];
    _cameraView.frame = [[UIScreen mainScreen] bounds];
    
    [_cameraView startRecord];// 直播视频
    //     [_cameraView startPlay];// 播放视频
    
    [self.view addSubview:_cameraView];
    [self.view sendSubviewToBack:_cameraView];
}



@end
