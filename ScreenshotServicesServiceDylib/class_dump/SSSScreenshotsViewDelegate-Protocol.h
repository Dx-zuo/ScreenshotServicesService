//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SSSScreenshotsView, UIView, UIViewController;

@protocol SSSScreenshotsViewDelegate
- (_Bool)isShowingDoneActionSheet;
- (void)cropDidChangeForScreenshotView:(SSSScreenshotsView *)arg1;
- (void)didTapOpacityOptionWithAttributeView:(UIView *)arg1;
- (UIViewController *)viewControllerForPresentationsFromScreenshotsView:(SSSScreenshotsView *)arg1;
- (void)screenshotDidChangeForScreenshotsView:(SSSScreenshotsView *)arg1;
- (void)undoStackChangedForScreenshotsView:(SSSScreenshotsView *)arg1;
- (void)activityItemsChangedForScreenshotsView:(SSSScreenshotsView *)arg1;
@end
