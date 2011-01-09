/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDBGObjectPlaceholder, GQDBGSlideNumberPlaceholder, GQDSStyle, GQDSStylesheet, GQDBGBodyPlaceholder, GQDBGTitlePlaceholder;



@interface GQDBGAbstractSlide : NSObject 
{
    GQDSStylesheet *mStylesheet;
    GQDSStyle *mSlideStyle;
    GQDBGTitlePlaceholder *mTitlePlaceholder;
    GQDBGBodyPlaceholder *mBodyPlaceholder;
    GQDBGObjectPlaceholder *mObjectPlaceholder;
    GQDBGSlideNumberPlaceholder *mSlideNumberPlaceholder;
    BOOL mHidden;
    char *mID;
    BOOL mCallGenerator;
}


- (char *)ID;
- (id)stylesheet;
- (BOOL)isHidden;
- (void)dealloc;
- (NSInteger)readAttributesForSlide:(struct _xmlTextReader { }*)arg1;
- (id)slideStyle;

@end