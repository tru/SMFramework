/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceCategoryProvider : NSObject <BRProvider> {
@private
	NSArray *_categories;	// 4 = 0x4
}
@property(retain) NSArray *categories;	// G=0x34cf6dcd; S=0x34cf6cf9; converted property
// converted property getter: - (id)categories;	// 0x34cf6dcd
- (long)categoryIndexForIdentifier:(id)identifier;	// 0x34cf6e4d
- (id)controlFactory;	// 0x34cf6ecd
- (id)dataAtIndex:(long)index;	// 0x34cf6f0d
- (long)dataCount;	// 0x34cf6eed
- (void)dealloc;	// 0x34cf6cb5
- (long)defaultCategoryIndex;	// 0x34cf6ddd
- (id)hashForDataAtIndex:(long)index;	// 0x34cf6f2d
// converted property setter: - (void)setCategories:(id)categories;	// 0x34cf6cf9
@end
