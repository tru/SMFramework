/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRListControl, BRDropShadowControl;

__attribute__((visibility("hidden")))
@interface BRBoxListControl : BRControl {
@private
	BRListControl *_list;	// 44 = 0x2c
	BRDropShadowControl *_shadow;	// 48 = 0x30
}
@property(retain) id providers;	// G=0x34cfd849; S=0x34cfd815; converted property
- (id)init;	// 0x34cfd5e5
- (void)dealloc;	// 0x34cfd785
- (void)layoutSubcontrols;	// 0x34cfd889
- (float)listHeightToMaximum:(float)maximum;	// 0x34cfd869
// converted property getter: - (id)providers;	// 0x34cfd849
- (void)setProvider:(id)provider;	// 0x34cfd7dd
// converted property setter: - (void)setProviders:(id)providers;	// 0x34cfd815
@end

