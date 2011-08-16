/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRImage, BRReflectionControl, BRTableView, NSString;

__attribute__((visibility("hidden")))
@interface ATVStandingsBoxView : BRControl {
@private
	BRImage *_backgroundImage;	// 44 = 0x2c
	BRTextControl *_titleControl;	// 48 = 0x30
	BRImage *_overlayImage;	// 52 = 0x34
	BRReflectionControl *_reflectionControl;	// 56 = 0x38
	BRTableView *_tableView;	// 60 = 0x3c
	float headerHeight;	// 64 = 0x40
	float _headerHeight;	// 68 = 0x44
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x34c808c5; S=0x34c808d5; 
@property(assign, nonatomic) float headerHeight;	// G=0x34c80c75; S=0x34c80c85; @synthesize=_headerHeight
@property(readonly, assign, nonatomic) BRTableView *tableView;	// G=0x34c80c95; @synthesize=_tableView
@property(copy, nonatomic) NSString *title;	// G=0x34c80879; S=0x34c80835; 
- (id)init;	// 0x34c8066d
- (id)accessibilityLabel;	// 0x34c80c31
// declared property getter: - (id)backgroundImage;	// 0x34c808c5
- (void)dealloc;	// 0x34c807a9
- (void)drawInContext:(CGContextRef)context;	// 0x34c8096d
// declared property getter: - (float)headerHeight;	// 0x34c80c75
- (BOOL)isAccessibilityElement;	// 0x34c80c2d
- (void)layoutSubcontrols;	// 0x34c80a59
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x34c808d5
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x34c80c85
// declared property setter: - (void)setTitle:(id)title;	// 0x34c80835
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34c808a9
// declared property getter: - (id)tableView;	// 0x34c80c95
// declared property getter: - (id)title;	// 0x34c80879
@end
