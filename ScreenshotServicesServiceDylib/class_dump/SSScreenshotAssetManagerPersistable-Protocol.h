//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSString;

@protocol SSScreenshotAssetManagerPersistable
@property(readonly, nonatomic) unsigned long long saveLocation;
@property(readonly, nonatomic) NSData *imageModificationData;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *filename;
- (void)savePDFWithBlock:(void (^)(NSData *))arg1;
- (void)removePDF;
- (void)requestImageWithBlock:(void (^)(UIImage *))arg1;
@end

