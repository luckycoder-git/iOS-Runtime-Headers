/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsSpec : PXFeatureSpec {
    struct UIColor { Class x1; } * _backgroundColor;
    PXPhotosDetailsBarSpec * _barSpec;
    PXWidgetCompositionSpec * _compositionSpec;
    unsigned int  _detailsOptions;
    float  _dimmingAlpha;
    struct UIColor { Class x1; } * _dimmingColor;
    PXWidgetSpec * _widgetSpec;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) PXPhotosDetailsBarSpec *barSpec;
@property (nonatomic, readonly) PXWidgetCompositionSpec *compositionSpec;
@property (nonatomic, readonly) unsigned int detailsOptions;
@property (nonatomic, readonly) float dimmingAlpha;
@property (nonatomic, readonly) UIColor *dimmingColor;
@property (nonatomic, readonly) BOOL enableActionsWidget;
@property (nonatomic, readonly) BOOL shouldInitializeBarsController;
@property (nonatomic, readonly) PXWidgetSpec *widgetSpec;

- (void).cxx_destruct;
- (struct UIColor { Class x1; }*)backgroundColor;
- (id)barSpec;
- (id)compositionSpec;
- (unsigned int)detailsOptions;
- (float)dimmingAlpha;
- (struct UIColor { Class x1; }*)dimmingColor;
- (BOOL)enableActionsWidget;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned int)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned int)arg2 detailsOptions:(unsigned int)arg3;
- (BOOL)shouldInitializeBarsController;
- (id)widgetSpec;

@end