//
//  UIViewController+TDLog.h
//  BreweryExp
//
//  Created by Dao Duy Thuy on 10/22/14.
//  Copyright (c) 2014 QS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <MessageUI/MFMailComposeViewController.h>
#import "NSObject+File.h"

@interface UIViewController (TDLog)

@property (nonatomic, retain) UITapGestureRecognizer *twoFingerTapGesture;
@property (nonatomic, retain) UIButton *btnSendLog;

- (void)activeLog;
- (void)deActiveLog;

@end
