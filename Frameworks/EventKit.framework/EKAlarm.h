/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAlarm : EKObject <NSCopying> {
    EKObjectToOneRelation *_locationRelation;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, copy) NSDate *absoluteDate;
@property (nonatomic, copy) NSDate *acknowledgedDate;
@property (getter=isDefaultAlarm, nonatomic) BOOL defaultAlarm;
@property (nonatomic, readonly) NSString *externalID;
@property (readonly) BOOL isAbsolute;
@property (nonatomic, readonly) BOOL isSnoozedAlarm;
@property (nonatomic, retain) EKObjectToOneRelation *locationRelation;
@property (nonatomic, retain) EKAlarm *originalAlarm;
@property (nonatomic, retain) EKCalendarItem *owner;
@property (nonatomic) int proximity;
@property (nonatomic) double relativeOffset;
@property (nonatomic, copy) NSArray *snoozedAlarms;
@property (nonatomic, copy) EKStructuredLocation *structuredLocation;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (int)_currentAuthorizationStatus;
+ (id)alarmWithAbsoluteDate:(id)arg1;
+ (id)alarmWithRelativeOffset:(double)arg1;
+ (BOOL)areLocationsAllowed;
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)arg1;
+ (BOOL)areLocationsAvailable;
+ (BOOL)areLocationsCurrentlyEnabled;
+ (double)defaultGeofencedReminderRadius;

- (id)UUID;
- (id)_locationRelation;
- (id)_originalAlarmRelation;
- (id)_snoozedAlarmsRelation;
- (id)absoluteDate;
- (id)acknowledgedDate;
- (void)addSnoozedAlarm:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)externalID;
- (id)init;
- (id)initWithAbsoluteDate:(id)arg1;
- (id)initWithRelativeOffset:(double)arg1;
- (BOOL)isAbsolute;
- (BOOL)isDefaultAlarm;
- (BOOL)isSnoozedAlarm;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)locationRelation;
- (id)originalAlarm;
- (id)owner;
- (id)ownerUUID;
- (int)proximity;
- (BOOL)rebase;
- (double)relativeOffset;
- (void)removeSnoozedAlarm:(id)arg1;
- (void)setAbsoluteDate:(id)arg1;
- (void)setAcknowledgedDate:(id)arg1;
- (void)setDefaultAlarm:(BOOL)arg1;
- (void)setLocationRelation:(id)arg1;
- (void)setOriginalAlarm:(id)arg1;
- (void)setProximity:(int)arg1;
- (void)setRelativeOffset:(double)arg1;
- (void)setSnoozedAlarms:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (id)snoozedAlarms;
- (id)structuredLocation;
- (BOOL)validate:(id*)arg1;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (id)_localizedDescription:(BOOL)arg1 forEvent:(BOOL)arg2 isAllDay:(BOOL)arg3;
- (id)localizedAllDayDescription;
- (id)localizedDescription;
- (id)localizedDescriptionForReminder;
- (id)longLocalizedAllDayDescription;
- (id)longLocalizedDescription;

@end
