/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSURL, NSString;

@interface CalendarParticipantEditModel : CalendarParticipant {
    NSURL *_emailAddress;
    BOOL _isSelf;
    NSString *_name;
    NSInteger _role;
    NSInteger _status;
    NSInteger _type;
}

- (id)address;
- (void)commitIntoAttendee:(void*)arg1;
- (id)commonName;
- (id)displayName;
- (id)initWithAttendee:(void*)arg1;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithOrganizer:(struct CalOrganizer { }*)arg1;
- (BOOL)isSelf;
- (NSInteger)role;
- (NSInteger)status;
- (NSInteger)type;

@end