//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PDFKit/PDFPage.h>

@interface SSSPDFPage : PDFPage
{
    _Bool _isSaving;
    double _vellumOpacity;
}

@property(nonatomic) _Bool isSaving; // @synthesize isSaving=_isSaving;
@property(nonatomic) double vellumOpacity; // @synthesize vellumOpacity=_vellumOpacity;
- (void)drawWithBox:(long long)arg1 toContext:(struct CGContext *)arg2;

@end
