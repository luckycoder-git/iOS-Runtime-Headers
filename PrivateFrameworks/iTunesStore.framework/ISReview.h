/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, NSString;



@interface ISReview : NSObject <NSCoding, NSCopying>
{
    NSInteger _assetType;
    NSString *_body;
    NSUInteger _bodyMaxLength;
    NSURL *_infoURL;
    unsigned long long _itemIdentifier;
    NSString *_nickname;
    BOOL _nicknameIsConfirmed;
    NSUInteger _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    NSUInteger _titleMaxLength;
}

@property(readonly) BOOL hasSavedDraft;
@property NSUInteger titleMaxLength;
@property(retain) NSString *title;
@property(retain) NSURL *submitURL;
@property float rating;
@property NSUInteger nicknameMaxLength;
@property BOOL nicknameIsConfirmed;
@property(retain) NSString *nickname;
@property unsigned long long itemIdentifier;
@property(retain) NSURL *infoURL;
@property NSUInteger bodyMaxLength;
@property(retain) NSString *body;
@property NSInteger assetType;


- (float)rating;
- (void)setRating:(float)arg1;
- (BOOL)saveAsDraft;
- (BOOL)restoreFromDraft;
- (BOOL)removeDraft;
- (id)nickname;
- (id)infoURL;
- (unsigned long long)itemIdentifier;
- (NSInteger)assetType;
- (void)setNickname:(id)arg1;
- (void)setNicknameIsConfirmed:(BOOL)arg1;
- (BOOL)nicknameIsConfirmed;
- (BOOL)hasSavedDraft;
- (void)setAssetType:(NSInteger)arg1;
- (void)setInfoURL:(id)arg1;
- (NSUInteger)titleMaxLength;
- (NSUInteger)nicknameMaxLength;
- (void)mergeWithReview:(id)arg1 preferLocalValues:(BOOL)arg2;
- (NSUInteger)bodyMaxLength;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)loadFromDictionary:(id)arg1;
- (id)_draftFileName;
- (id)_draftsDirectoryPath;
- (void)setTitleMaxLength:(NSUInteger)arg1;
- (id)submitURL;
- (void)setSubmitURL:(id)arg1;
- (void)setNicknameMaxLength:(NSUInteger)arg1;
- (void)setBodyMaxLength:(NSUInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)body;
- (void)encodeWithCoder:(id)arg1;
- (id)title;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setBody:(id)arg1;

@end