/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray, NSString, ASRecurrence, ASTimeZone, ASEventUID, NSDate, NSNumber;

@interface ASEvent : ASChangedCollectionLeaf <NSCoding, ASDataElement> {
    NSNumber *_allDayEvent;
    NSArray *_attendees;
    NSArray *_attendeesPendingDeletion;
    NSString *_body;
    NSNumber *_bodyTruncated;
    NSNumber *_busyStatus;
    BOOL _cachedOrganizerIsSelf;
    void *_calRecord;
    BOOL _calculateNextStatusAsIfMeetingRequest;
    NSDate *_dTStamp;
    NSDate *_endTime;
    ASEventUID *_eventUID;
    NSArray *_exceptions;
    BOOL _haveCheckedOrganizerEmail;
    BOOL _isAttendeeUpdateOnly;
    BOOL _isDTStampUpdateOnly;
    NSString *_location;
    NSInteger _meetingResponseToEmailAbout;
    NSNumber *_meetingStatus;
    NSString *_organizerEmail;
    NSString *_organizerName;
    ASRecurrence *_recurrence;
    NSNumber *_reminderMinsBefore;
    NSNumber *_responseRequested;
    NSNumber *_sensitivity;
    BOOL _shouldUpdateStatus;
    NSDate *_startTime;
    NSString *_subject;
    ASTimeZone *_timeZone;
}

@property(retain) NSNumber *allDayEvent;
@property(retain) NSArray *attendees;
@property(retain) NSArray *attendeesPendingDeletion;
@property(retain) NSString *body;
@property(retain) NSNumber *bodyTruncated;
@property(retain) NSNumber *busyStatus;
@property(retain) NSDate *dTStamp;
@property(retain) NSDate *endTime;
@property(retain) ASEventUID *eventUID;
@property(retain) NSArray *exceptions;
@property(retain) NSString *location;
@property(retain) NSNumber *meetingStatus;
@property(retain) NSString *organizerEmail;
@property(retain) NSString *organizerName;
@property(retain) ASRecurrence *recurrence;
@property(retain) NSNumber *reminderMinsBefore;
@property(retain) NSNumber *responseRequested;
@property(retain) NSNumber *sensitivity;
@property(retain) NSDate *startTime;
@property(retain) NSString *subject;
@property(retain) ASTimeZone *timeZone;

+ (void)_setFakeDTStampDateForUnitTests:(id)arg1;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)eventWithCalEvent:(void*)arg1 serverID:(id)arg2 account:(id)arg3;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (BOOL)_bailIfNotNewestData;
- (void)_determineSelfnessWithLocalEvent:(void*)arg1 forAccount:(id)arg2;
- (void)_loadAttributesFromCalEvent:(void*)arg1 forAccount:(id)arg2;
- (NSInteger)_meetingResponseShouldFilterForEmail:(BOOL)arg1;
- (NSInteger)_nextEventStatusWithOldStatus:(NSInteger)arg1 meetingClassType:(NSInteger)arg2;
- (NSInteger)_nextEventStatusWithOldStatus:(NSInteger)arg1;
- (void)_sanitizeLocalExceptionsForAccount:(id)arg1;
- (BOOL)_selfIsMoreCorrectThanOtherEvent:(id)arg1;
- (BOOL)_shouldKeepLocalExceptions;
- (id)_transformedEndDateForActiveSync:(id)arg1;
- (id)_transformedEndDateForCalFramework:(id)arg1 startDate:(id)arg2;
- (id)_transformedStartDateForActiveSync:(id)arg1;
- (id)_transformedStartDateForCalFramework:(id)arg1;
- (void)_updateDTStampOnly;
- (id)allDayEvent;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (id)asParseRules;
- (id)attendees;
- (id)attendeesPendingDeletion;
- (id)body;
- (id)bodyTruncated;
- (id)busyStatus;
- (BOOL)cachedOrganizerIsSelf;
- (void*)calEvent;
- (NSInteger)calEventExternalStatus;
- (NSInteger)calEventStatus;
- (NSInteger)classType;
- (id)dTStamp;
- (void)dealloc;
- (BOOL)deleteFromCalendar;
- (BOOL)deleteFromContainer:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDateForCalFramework;
- (id)endTime;
- (id)eventByMergingInEvent:(id)arg1;
- (id)eventByMergingInLosingEvent:(id)arg1;
- (id)eventUID;
- (id)exceptionDate;
- (id)exceptions;
- (id)fullOrganizerString;
- (BOOL)hasLocalModifications:(void*)arg1;
- (BOOL)hasLocalModificationsWithLocalObject:(void*)arg1;
- (BOOL)hasOccurrenceInTheFuture;
- (void)informExceptionsThatParentIsReadyForAccount:(id)arg1;
- (id)init;
- (id)initWithCalEvent:(void*)arg1 serverID:(id)arg2 account:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToEvent:(id)arg1;
- (BOOL)loadCalRecordForAccount:(id)arg1;
- (void)loadClientIDs;
- (BOOL)loadLocalItemWithAccount:(id)arg1;
- (id)location;
- (NSInteger)meetingResponse;
- (NSInteger)meetingResponseForEmail;
- (id)meetingStatus;
- (id)organizerEmail;
- (id)organizerName;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)postProcessApplicationData;
- (BOOL)purgeAttendeesPendingDeletion;
- (id)recurrence;
- (id)reminderMinsBefore;
- (id)responseRequested;
- (BOOL)saveAfterMapWithLocalObject:(void*)arg1 toContainer:(void*)arg2 treatNullsAsDeletes:(BOOL)arg3 account:(id)arg4;
- (BOOL)saveDetachedEventsWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 treatNullsAsDeletes:(BOOL)arg3 account:(id)arg4;
- (BOOL)saveServerIDToCalendar;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)saveToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 treatNullsAsDeletes:(BOOL)arg3 account:(id)arg4;
- (BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 treatNullsAsDeletes:(BOOL)arg3 account:(id)arg4;
- (id)sensitivity;
- (void)setAllDayEvent:(id)arg1;
- (void)setAttendees:(id)arg1;
- (void)setAttendeesPendingDeletion:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setBodyTruncated:(id)arg1;
- (void)setBusyStatus:(id)arg1;
- (void)setCalEvent:(void*)arg1;
- (void)setCalculateNextStatusAsIfMeetingRequest:(BOOL)arg1;
- (void)setDTStamp:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setEventUID:(id)arg1;
- (void)setExceptionDate:(id)arg1;
- (void)setExceptions:(id)arg1;
- (void)setLocalItem:(void*)arg1;
- (void)setLocation:(id)arg1;
- (void)setMeetingResponseForEmail:(NSInteger)arg1;
- (void)setMeetingStatus:(id)arg1;
- (void)setOrganizerEmail:(id)arg1;
- (void)setOrganizerName:(id)arg1;
- (void)setRecurrence:(id)arg1;
- (void)setReminderMinsBefore:(id)arg1;
- (void)setResponseRequested:(id)arg1;
- (void)setSensitivity:(id)arg1;
- (void)setShouldUpdateStatus:(BOOL)arg1;
- (void)setStartTime:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (BOOL)shouldUseInMemoryAttendeesForAccount:(id)arg1 numExistingAttendees:(NSInteger)arg2;
- (id)startDateForCalFramework;
- (id)startTime;
- (id)subject;
- (id)timeZone;
- (id)timeZoneNameForCalFramework;
- (id)uidForCalFramework;
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void*)arg1;

@end
