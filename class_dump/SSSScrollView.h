//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@interface SSSScrollView : UIScrollView
{
    _Bool _animateSuperZoomToRect;
    _Bool _inSuperZoomToRect;
    _Bool _isInProgrammaticCall;
    _Bool _hitTestsUsingSubviews;
}

@property(nonatomic) _Bool hitTestsUsingSubviews; // @synthesize hitTestsUsingSubviews=_hitTestsUsingSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) _Bool isMoving;
@property(readonly, nonatomic) struct CGRect visibleRect;
- (struct CGSize)_unscaledContentSize;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isInProgrammaticCall;
- (void)zoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
