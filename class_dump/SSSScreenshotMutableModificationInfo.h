//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSSScreenshotModificationInfo.h"

@class NSArray, PKDrawing;
@protocol SSSScreenshotMutableModificationInfoChangeObserver;

@interface SSSScreenshotMutableModificationInfo : SSSScreenshotModificationInfo
{
    PKDrawing *_drawing;
    id <SSSScreenshotMutableModificationInfoChangeObserver> _changeObserver;
}

@property(nonatomic) __weak id <SSSScreenshotMutableModificationInfoChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
- (void).cxx_destruct;
- (void)takeValueFromModificationInfo:(id)arg1 forKey:(unsigned long long)arg2;
@property(nonatomic) double vellumOpacity; // @dynamic vellumOpacity;
@property(retain, nonatomic) NSArray *originalAnnotations; // @dynamic originalAnnotations;
@property(retain, nonatomic) NSArray *annotationNSDatas; // @dynamic annotationNSDatas;
@property(nonatomic) struct SSSCropInfo cropInfo; // @dynamic cropInfo;

@end

