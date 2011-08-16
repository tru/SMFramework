/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedMerchant.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderMerchant : ATVFeedMerchant {
@private
	NSDictionary *_thunderInfo;	// 20 = 0x14
}
+ (id)baseURLForKey:(id)key;	// 0x34c7c8dd
+ (id)deviceAlias;	// 0x34c7c8d1
+ (void)setURLBag:(id)bag;	// 0x34c7c84d
- (id)init;	// 0x34c7c905
- (id)archiveVideoStartDate;	// 0x34c7cac1
- (Class)catalogAgent;	// 0x34c7c9d9
- (id)cityDisplayNameForTeam:(id)team;	// 0x34c7cb25
- (id)courtURLForTeam:(id)team;	// 0x34c7cc65
- (id)currentSeasonEndDate;	// 0x34c7ca5d
- (id)currentSeasonStartDate;	// 0x34c7c9f9
- (void)dealloc;	// 0x34c7c995
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x34c7cca5
- (id)largeLogoURLForTeam:(id)team;	// 0x34c7cc25
- (id)longDisplayNameForTeam:(id)team;	// 0x34c7cba5
- (id)shortDisplayNameForTeam:(id)team;	// 0x34c7cb65
- (id)smallLogoURLForTeam:(id)team;	// 0x34c7cbe5
@end
