//
//  AppDelegate.h
//  NewsReader
//
//  Created by Weikuan Chen on 15/13/08.
//  Copyright 2015 Flying Weikuan All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WXApi.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, WXApiDelegate>

@property (strong, nonatomic) UIWindow *window;

+ (AppDelegate *)appDeg;
- (void)showHomePage;

@end

