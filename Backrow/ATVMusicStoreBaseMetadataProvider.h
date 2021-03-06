/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMetadataProvider.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreBaseMetadataProvider : NSObject <BRMetadataProvider> {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	BOOL _useAlternateMetadata;	// 8 = 0x8
}
@property(assign) BOOL useAlternateMetadata;	// G=0x34c17681; S=0x34c17691; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x34c175bd
- (id)initWithCatalogItem:(id)catalogItem;	// 0x34c175f1
- (id)controlFactory;	// 0x34c176bd
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x34c176a1
- (id)dataAtIndex:(long)index;	// 0x34c176c1
- (long)dataCount;	// 0x34c176a5
- (void)dealloc;	// 0x34c1763d
- (id)hashForDataAtIndex:(long)index;	// 0x34c176d5
- (void)populateMetadataForControl:(id)control;	// 0x34c176d1
// converted property setter: - (void)setUseAlternateMetadata:(BOOL)metadata;	// 0x34c17691
// converted property getter: - (BOOL)useAlternateMetadata;	// 0x34c17681
@end

