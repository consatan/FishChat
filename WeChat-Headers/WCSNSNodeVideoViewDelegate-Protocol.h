//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCSNSNodeVideoView, WCSightViewController;

@protocol WCSNSNodeVideoViewDelegate <NSObject>

@optional
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)OnDownloadSuccessForSaveVideoToAlbum;
- (void)OnDownloadSuccessForForwardVideoToFriend;
- (void)onWillFullPlay:(_Bool *)arg1 sightView:(WCSNSNodeVideoView *)arg2;
- (void)onJumpToViewDetail:(NSString *)arg1;
- (void)onLongPressedWCSightFullScreenWindow:(WCSightViewController *)arg1;
- (void)onLongPressedWCSight:(WCSNSNodeVideoView *)arg1;
- (void)onClickWCSight:(WCSNSNodeVideoView *)arg1;
@end
