/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"


@interface BRShareManager : BRSingleton {
@private
	BOOL _isWirelessInterfaceActive;	// 4 = 0x4
	BOOL _isWiredInterfaceActive;	// 5 = 0x5
	BOOL _activeNetworkInterfaceInitialized;	// 6 = 0x6
}
+ (void)setSingleton:(id)singleton;	// 0x34d9b221
+ (id)singleton;	// 0x34d9b215
- (id)_availableHomeSharesOfType:(unsigned long)type;	// 0x34d9b695
- (BOOL)_connectAvailableDataClientsForServer:(ATVDataServerRef)server;	// 0x34d9b57d
- (void)_dataClientConnectionHandlerWithObject:(id)object;	// 0x34d9b5fd
- (void)_networkStateChanged:(id)changed;	// 0x34d9b739
- (void)_serverAvailableForConnection:(id)connection;	// 0x34d9b509
- (id)allHomeSharesSortedByName;	// 0x34d9b2c1
- (id)availableHomeShares;	// 0x34d9b279
- (id)availableHomeSharesSortedByLastRegisteredDate;	// 0x34d9b2f1
- (id)availableHomeSharesSortedByName;	// 0x34d9b291
- (BOOL)connectToServer:(ATVDataServerRef)server;	// 0x34d9b3ad
- (int)sharingState;	// 0x34d9b321
@end

