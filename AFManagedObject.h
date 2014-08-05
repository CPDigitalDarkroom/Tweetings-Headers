//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@interface AFManagedObject : NSManagedObject
{
}

+ (id)updateOrCreateWithDictionary:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)createInManagedObjectContext:(id)arg1;
+ (id)findObjectWithIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)findObjectWithValue:(id)arg1 forAttributeNamed:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)fetchAllInManagedObjectContext:(id)arg1;
+ (id)fetchAllMatching:(id)arg1 inManagedObjectContext:(id)arg2;
+ (Class)targetClassForRelationship:(id)arg1;
+ (id)uniqueKeyAttribute;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)forceLinkerLoad_;
- (void)updateRelationship:(id)arg1 withValue:(id)arg2;
- (void)updateAttribute:(id)arg1 withValue:(id)arg2;
- (void)updateWithDictionary:(id)arg1;

@end

