//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSString, SSSDittoDebugViewController, SSSViewControllerManager, UIWindow;

@interface SSSAppDelegate : UIResponder <UIApplicationDelegate>
{
    SSSDittoDebugViewController *_debugViewController;
    SSSViewControllerManager *_viewControllerManager;
    _Bool _didLaunchSuspended;
    UIWindow *_window;
}

@property(nonatomic) _Bool didLaunchSuspended; // @synthesize didLaunchSuspended=_didLaunchSuspended;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
@property(readonly, nonatomic) SSSViewControllerManager *viewControllerManager;
- (void)_setUpDevelopmentUI;
- (_Bool)_shouldSetUpDevelopmentUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

