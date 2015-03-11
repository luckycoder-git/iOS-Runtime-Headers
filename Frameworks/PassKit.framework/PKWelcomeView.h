/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSAttributedString, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UITextView;

@interface PKWelcomeView : UIView {
    UIButton *_actionButton;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_backgroundView;
    UIImage *_headerImage;
    UIImageView *_headerView;
    NSAttributedString *_message;
    UITextView *_messageView;
    NSAttributedString *_title;
    UITextView *_titleView;
}

@property(retain) UIButton * actionButton;
@property(retain,readonly) UIActivityIndicatorView * activityIndicator;
@property(retain) UIImage * headerImage;
@property(copy) NSAttributedString * message;
@property(copy) NSAttributedString * title;

+ (void)beginTrackingAction;
+ (double)bodySeparation;
+ (double)defaultHeight;
+ (void)endTrackingAction;
+ (double)headerImageRegionHeight;
+ (bool)isAvailable;
+ (bool)isPerformingAction;
+ (id)messageFont;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textInsets;
+ (id)titleFont;

- (id)actionButton;
- (id)activityIndicator;
- (void)dealloc;
- (id)headerImage;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithHeight:(double)arg1;
- (void)layoutSubviews;
- (id)message;
- (void)setActionButton:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end