/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class ATVThunderLineScoreView, ATVThunderGameCourtView;

__attribute__((visibility("hidden")))
@interface ATVThunderGamePreviewControl : BRControl {
@private
	ATVThunderLineScoreView *_lineScore;	// 44 = 0x2c
	ATVThunderGameCourtView *_gameCourt;	// 48 = 0x30
}
- (id)initWithDictionary:(id)dictionary;	// 0x34c87825
- (id)accessibilityLabel;	// 0x34c87aad
- (void)dealloc;	// 0x34c87919
- (void)layoutSubcontrols;	// 0x34c87971
@end
