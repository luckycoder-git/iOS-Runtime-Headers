/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGroupInsertionItem : NSObject {
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    NSInteger _index;
    } _range;
}

- (NSInteger)groupIndex;
- (id)initWithExistingGroup:(NSInteger)arg1 andRowRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)initWithNewGroupBeforeGroup:(NSInteger)arg1 andRowCount:(NSInteger)arg2;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })range;

@end