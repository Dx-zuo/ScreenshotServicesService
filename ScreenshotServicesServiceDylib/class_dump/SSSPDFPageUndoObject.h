//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFPage, SSSScreenshotModificationInfo;

@interface SSSPDFPageUndoObject : NSObject
{
    PDFPage *_page;
    long long _index;
    SSSScreenshotModificationInfo *_modificationInfo;
}

+ (id)newPageUndoObjectWithPDFPage:(id)arg1 index:(long long)arg2 modificationInfo:(id)arg3;
@property(retain, nonatomic) SSSScreenshotModificationInfo *modificationInfo; // @synthesize modificationInfo=_modificationInfo;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) PDFPage *page; // @synthesize page=_page;
- (void).cxx_destruct;

@end

