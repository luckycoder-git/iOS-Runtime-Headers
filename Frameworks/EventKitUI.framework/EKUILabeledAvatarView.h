/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUILabeledAvatarView : UIView {
    CNAvatarView * _avatar;
    UILabel * _label;
    unsigned int  _labelPlacement;
    unsigned int  _options;
    UIViewController * _viewController;
}

@property (retain) CNAvatarView *avatar;
@property (retain) CNContact *contact;
@property (retain) UILabel *label;
@property unsigned int labelPlacement;
@property unsigned int options;
@property UIViewController *viewController;

+ (id)_createAvatarView;
+ (id)contactForEmailAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)sharedContactStore;
+ (id)sortedAvatarListFromParticipants:(id)arg1;

- (void).cxx_destruct;
- (id)avatar;
- (id)contact;
- (void)didTap;
- (id)init;
- (id)initWithContact:(id)arg1 placement:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)initWithEmail:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 placement:(unsigned int)arg5 options:(unsigned int)arg6;
- (id)initWithParticipant:(id)arg1 placement:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)initWithPlacement:(unsigned int)arg1 options:(unsigned int)arg2;
- (id)label;
- (unsigned int)labelPlacement;
- (unsigned int)options;
- (void)setAvatar:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelPlacement:(unsigned int)arg1;
- (void)setOptions:(unsigned int)arg1;
- (void)setUpTap;
- (void)setViewController:(id)arg1;
- (void)setup;
- (void)updateLabel;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithEmail:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (void)updateWithParticpant:(id)arg1;
- (id)viewController;

@end