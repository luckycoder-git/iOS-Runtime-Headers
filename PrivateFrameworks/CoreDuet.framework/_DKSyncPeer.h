/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncPeer : NSObject {
    NSString * _idsDeviceIdentifier;
    bool  _me;
    NSString * _model;
    NSString * _name;
    NSString * _sourceDeviceID;
    NSUUID * _uuid;
    NSString * _zoneName;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSString *idsDeviceIdentifier;
@property (nonatomic) bool me;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *sourceDeviceID;
@property (nonatomic, readonly, copy) NSUUID *sourceDeviceUUID;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, copy) NSString *zoneName;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)idsDeviceIdentifier;
- (id)init;
- (id)initWithIDSDeviceIdentifier:(id)arg1;
- (id)initWithIDSDeviceIdentifier:(id)arg1 zoneName:(id)arg2;
- (id)initWithZoneName:(id)arg1;
- (bool)me;
- (id)model;
- (id)name;
- (void)setIdsDeviceIdentifier:(id)arg1;
- (void)setMe:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSourceDeviceID:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setZoneName:(id)arg1;
- (id)sourceDeviceID;
- (id)sourceDeviceUUID;
- (id)uuid;
- (id)zoneName;

@end