//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, UIStepper, UISwitch, WKWebView;
@protocol SSSDittoDebugViewDelegate;

@interface SSSDittoDebugView : UIView
{
    UIButton *_addScreenshotsButton;
    UIStepper *_numberOfScreenshotsToAddStepper;
    UISwitch *_snapshotPDFSwitch;
    UILabel *_snapshotPDFLabel;
    UISwitch *_multipagePDFSwitch;
    UILabel *_multipagePDFLabel;
    UIButton *_uiCatalogButton;
    WKWebView *_webView;
    CDUnknownBlockType _blockToRunForAddScreenshotsButton;
    id <SSSDittoDebugViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SSSDittoDebugViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType blockToRunForAddScreenshotsButton; // @synthesize blockToRunForAddScreenshotsButton=_blockToRunForAddScreenshotsButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateScreenshotCount;
- (void)_uiCatalogButtonPushed;
@property(readonly, nonatomic) long long numberOfScreenshotsToAdd;
- (void)resetScrollOffset;
- (void)advanceScrollOffset;
- (id)generatePDF:(struct CGRect *)arg1;
- (_Bool)shouldIncludePDF;
- (void)_addScreenshotPushed;
- (id)initWithFrame:(struct CGRect)arg1;

@end

