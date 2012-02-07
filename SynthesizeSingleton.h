//
//  SynthesizeSingleton.h
//  iTrackSportsBets
//
//  Created by Matt Gallagher on 20/10/08.
//  Copyright 2008 Matt Gallagher. All rights reserved.
//
//  Permission is given to use this source code file, free of charge, in any
//  project, commercial or otherwise, entirely at your risk, with the condition
//  that any redistribution (in part or whole) of source code must retain
//  this copyright and permission notice. Attribution in compiled projects is
//  appreciated but not required.
//

#define SYNTHESIZE_SINGLETON_FOR_CLASS(classname,sharedN) \
 \
static classname *sharedN = nil; \
 \
+ (classname *)sharedN \
{ \
	@synchronized(self) \
	{ \
		if (sharedN == nil) \
		{ \
			sharedN = [[self alloc] init]; \
		} \
	} \
	 \
	return sharedN; \
} \
 \
+ (id)allocWithZone:(NSZone *)zone \
{ \
	@synchronized(self) \
	{ \
		if (sharedN == nil) \
		{ \
			sharedN = [super allocWithZone:zone]; \
			return sharedN; \
		} \
	} \
	 \
	return nil; \
} \
 \
- (id)copyWithZone:(NSZone *)zone \
{ \
	return self; \
}