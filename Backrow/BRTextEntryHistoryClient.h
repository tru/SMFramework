/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <CoreData/NSManagedObject.h> // Unknown library

@class NSSet, BRTextEntryHistoryBehavior, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRTextEntryHistoryClient : NSManagedObject {
}
@property(retain, nonatomic) BRTextEntryHistoryBehavior *behavior;	// @dynamic
@property(retain, nonatomic) NSString *clientIdentifier;	// @dynamic
@property(retain, nonatomic) NSSet *historyItems;	// @dynamic
@property(retain, nonatomic) NSNumber *maxNumHistoryItems;	// @dynamic
@end

