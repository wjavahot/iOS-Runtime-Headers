/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKNearbyDevice : NSObject {
    NSString *_deviceID;
    NSString *_participantID;
    NSString *_playerID;
    int _state;
}

@property(retain) NSString * deviceID;
@property(retain) NSString * participantID;
@property(retain) NSString * playerID;
@property int state;

- (void)dealloc;
- (id)deviceID;
- (id)participantID;
- (id)playerID;
- (void)setDeviceID:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end
