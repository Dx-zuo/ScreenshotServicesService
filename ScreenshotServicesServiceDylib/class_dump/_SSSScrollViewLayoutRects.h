//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SSSScrollViewLayoutRects : NSObject
{
    struct CGRect _scrollViewRect;
    struct CGRect _visibleRect;
    struct CGRect _contentInsetRect;
}

@property(readonly, nonatomic) struct CGRect contentInsetRect; // @synthesize contentInsetRect=_contentInsetRect;
@property(readonly, nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(readonly, nonatomic) struct CGRect scrollViewRect; // @synthesize scrollViewRect=_scrollViewRect;
- (id)layoutRectsByConvertingFromView:(id)arg1 toView:(id)arg2;
- (id)layoutRectsByApplyingTransform:(struct CGAffineTransform)arg1;
- (id)initWithScrollViewRect:(struct CGRect)arg1 contentInsetRect:(struct CGRect)arg2 visibleRect:(struct CGRect)arg3;
- (id)initWithScrollView:(id)arg1 visibleRectInScrollView:(struct CGRect)arg2;

@end

