//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface AFTranslationManager : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectContext *_updateManagedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    id _saveObserver;
    struct dispatch_queue_s *_translationUpdateQueue;
}

+ (id)sharedManager;
@property(nonatomic) struct dispatch_queue_s *translationUpdateQueue; // @synthesize translationUpdateQueue=_translationUpdateQueue;
@property(retain, nonatomic) id saveObserver; // @synthesize saveObserver=_saveObserver;
- (void).cxx_destruct;
- (id)storeURL;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(readonly, nonatomic) NSManagedObjectContext *updateManagedObjectContext; // @synthesize updateManagedObjectContext=_updateManagedObjectContext;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void)updateWithDictionary:(id)arg1;
- (id)translationForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

