/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DALocalDBWatcher : NSObject  {
    int _lastSavedCalSequenceNumber;
    int _lastSavedABSequenceNumber;
    void *_abWatcher;
    struct CalDatabase { } *_calWatcher;
    struct __CFDictionary { } *_concernedABPartyToBlockMap;
    struct __CFDictionary { } *_concernedCalPartyToBlockMap;
    BOOL _watchingBookmarks;
    struct __CFDictionary { } *_concernedBookmarkPartyToBlockMap;
}

@property int lastSavedABSequenceNumber;
@property int lastSavedCalSequenceNumber;

+ (id)sharedDBWatcher;

- (id)init;
- (void)dealloc;
- (void)removeConcernedBookmarkParty:(id)arg1;
- (void)registerConcernedBookmarkParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)_handleBookmarkChangeNotification;
- (void)removeConcernedCalParty:(id)arg1;
- (void)registerConcernedCalParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)_handleCalChangeNotification;
- (void)removeConcernedABParty:(id)arg1;
- (void)registerConcernedABParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)_handleABChangeNotificationWithInfo:(id)arg1;
- (void)noteCalDBDirChanged;
- (void)noteABDBDirChanged;
- (void)setLastSavedCalSequenceNumber:(int)arg1;
- (int)lastSavedCalSequenceNumber;
- (void)setLastSavedABSequenceNumber:(int)arg1;
- (int)lastSavedABSequenceNumber;

@end