//
//  TWAppDelegate.h
//  TWiOS5ReverseAuthExample
//
//  Created by Sean Cook (@theSeanCook) on 9/15/11.
//  Copyright (c) 2011 Sean Cook. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TWViewController;

@interface TWAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) TWViewController *viewController;

@end
