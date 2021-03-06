/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRWaitSpinnerControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVAirTunesConnectionControl : BRControl {
@private
	BRControl *_background;	// 44 = 0x2c
	BRWaitSpinnerControl *_spinner;	// 48 = 0x30
	BRTextControl *_text;	// 52 = 0x34
}
- (id)init;	// 0x34beaaed
- (void)dealloc;	// 0x34beac21
- (void)layoutSubcontrols;	// 0x34beaccd
- (void)setStatus:(id)status;	// 0x34beac89
@end

