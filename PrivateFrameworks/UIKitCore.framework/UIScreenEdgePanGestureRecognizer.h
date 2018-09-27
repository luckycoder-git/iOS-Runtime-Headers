/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizingDelegate> {
    bool  _ignoreSubsequentTouches;
    <_UIScreenEdgePanRecognizing> * _recognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_shouldDefaultToTouches;
+ (bool)_shouldSupportStylusTouches;

- (void).cxx_destruct;
- (double)_edgeRegionSize;
- (struct CGPoint { double x1; double x2; })_locationForTouch:(id)arg1;
- (id)_recognizer;
- (void)_setEdgeRegionSize:(double)arg1;
- (void)_setHysteresis:(double)arg1;
- (bool)_shouldTryToBeginWithEvent:(id)arg1;
- (bool)_shouldUseGrapeFlags;
- (long long)_touchInterfaceOrientation;
- (double)bottomEdgeAngleWindow;
- (void)dealloc;
- (unsigned long long)edges;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoreSubsequentTouches;
- (void)incorporateTouches:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 maxTouches:(unsigned long long)arg4;
- (bool)isRequiringLongPress;
- (bool)recognizeAlongEdge;
- (bool)recognizeImmediatelyFromEdgeLocked;
- (id)recognizerTouchesToIgnoreForEvent:(id)arg1;
- (void)reset;
- (void)screenEdgePanRecognizingStateDidChange:(id)arg1;
- (void)setBottomEdgeAngleWindow:(double)arg1;
- (void)setEdges:(unsigned long long)arg1;
- (void)setRecognizeAlongEdge:(bool)arg1;
- (void)setRecognizeImmediatelyFromEdgeLocked:(bool)arg1;
- (unsigned long long)touchedEdges;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end