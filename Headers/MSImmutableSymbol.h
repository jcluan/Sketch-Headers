//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableSymbol.h"

#import "MSSymbol.h"

@class NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableSymbol : _MSImmutableSymbol <MSSymbol>
{
}

+ (id)defaultName;
- (id)masterInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <MSModelObjectCommon> valueGeneric;

@end

