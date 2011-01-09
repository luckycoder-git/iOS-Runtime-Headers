/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class CDXClient, NSTimer, NSData, <CDXClientSessionDelegate>, NSMutableIndexSet;



@interface CDXClientSession : NSObject 
{
    <CDXClientSessionDelegate> *delegate_;
    CDXClient *CDXClient_;
    NSData *ticket_;
    NSData *sessionKey_;
    NSMutableIndexSet *participantsInFlight_;
    NSInteger retransmitAttempts_;
    NSData *lastSent_;
    unsigned short seq_;
    unsigned char pid_;
    unsigned short *ack_;
    NSTimer *retransmitTimer_;
}

@property(copy,readonly) NSIndexSet *participantsInFlight;
@property(copy,readonly) NSData *sessionKey;
@property(copy) NSData *ticket;
@property <CDXClientSessionDelegate> *delegate;
@property(retain,readonly) CDXClient *CDXClient;


- (void)invalidate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)sessionKey;
- (id)initWithCDXClient:(id)arg1 ticket:(id)arg2 sessionKey:(id)arg3;
- (void)stopRetransmitTimer;
- (BOOL)retransmitEvent;
- (void)resetRetransmitTimer;
- (void)setTicket:(id)arg1;
- (id)decrypt:(id)arg1 ticket:(id)arg2;
- (id)encrypt:(id)arg1;
- (BOOL)sendRaw:(id)arg1 toParticipants:(id)arg2;
- (BOOL)sendData:(id)arg1 toParticipants:(id)arg2;
- (void)recvRaw:(id)arg1 ticket:(id)arg2;
- (id)participantsInFlight;
- (id)ticket;
- (id)CDXClient;
- (BOOL)sendData:(id)arg1;

@end