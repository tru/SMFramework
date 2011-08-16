/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuController.h"
#import "ATVAPTestResultDelegate.h"
#import "ATVAPPasswordEntryDelegate.h"
#import "BRMenuListItemProvider.h"
#import "BRTextFieldDelegate.h"

@class NSString, BRAirportNetworksProvider, NSArray, BRAirportNetwork;
@protocol ATVAPNetworkSelectionDelegate;

@interface ATVAPNetworkMenuController : BRMenuController <BRMenuListItemProvider, BRTextFieldDelegate, ATVAPPasswordEntryDelegate, ATVAPTestResultDelegate> {
@private
	id<ATVAPNetworkSelectionDelegate> _delegate;	// 104 = 0x68
	NSArray *_networks;	// 108 = 0x6c
	BRAirportNetwork *_selectedNetwork;	// 112 = 0x70
	NSString *_otherNetworkName;	// 116 = 0x74
	NSString *_attemptedPassword;	// 120 = 0x78
	BOOL _isCollectingNetworks;	// 124 = 0x7c
	BRAirportNetworksProvider *_networksProvider;	// 128 = 0x80
}
- (id)initWithNotifying:(id)notifying;	// 0x34c39411
- (void)_associateWithNetworkCompleted:(id)networkCompleted;	// 0x34c3a271
- (void)_collectPasswordForNetwork:(id)network;	// 0x34c39b4d
- (void)_collectWirelessNetworks;	// 0x34c39ad5
- (void)_networkHasBeenCollected:(id)collected;	// 0x34c3a16d
- (void)_networkStateChanged:(id)changed;	// 0x34c3a78d
- (void)_networksHaveBeenCollected:(id)collected;	// 0x34c39fd5
- (void)_removeDirectedScanControllerIfPresent;	// 0x34c3a3d1
- (void)_selectNetwork:(id)network usingPassword:(id)password;	// 0x34c39cd1
- (void)_showFailedNetworkConnection:(id)connection error:(id)error;	// 0x34c39dd5
- (void)_updateMenuWidth;	// 0x34c398f5
- (void)dealloc;	// 0x34c396c5
- (float)heightForRow:(long)row;	// 0x34c3a785
- (long)itemCount;	// 0x34c3a6d1
- (id)itemForRow:(long)row;	// 0x34c3a61d
- (void)itemSelected:(long)selected;	// 0x34c3978d
- (id)otherNetworkListItem;	// 0x34c39851
- (void)passwordEntered:(id)entered forNetwork:(id)network;	// 0x34c3a471
- (BOOL)rowSelectable:(long)selectable;	// 0x34c3a789
- (void)testCompleted:(BOOL)completed;	// 0x34c3a435
- (void)textDidChange:(id)text;	// 0x34c3a4cd
- (void)textDidEndEditing:(id)text;	// 0x34c3a4d1
- (id)titleForRow:(long)row;	// 0x34c3a6f5
@end
