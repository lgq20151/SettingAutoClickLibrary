//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, ICAttachment, ICDrawingViewController, UIImage;

@interface ICDrawingLightView : UIView
{
    ICAttachment *_attachment;
    long long _cachedOrientation;
    double _adjustScale;
    ICDrawingViewController *_viewController;
    CALayer *_imageLayer;
}

- (void).cxx_destruct;
- (void)_updateImage:(struct UIImage *)arg1;
@property(nonatomic) double adjustScale; // @synthesize adjustScale=_adjustScale;
- (void)asyncImageOrientated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncUpdateImage;
@property(nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
@property(nonatomic) long long cachedOrientation; // @synthesize cachedOrientation=_cachedOrientation;
- (_Bool)canBecomeFirstResponder;
- (void)done;
@property(readonly, nonatomic) struct CGPoint drawingCenterOffset;
- (struct CGRect)frameForFullscreenDrawing;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) struct CGRect imageFrame;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
- (struct UIImage *)imageOrientated:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withImageLayer:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setAttachment:(id)arg1 orientation:(long long)arg2;
@property(nonatomic) __weak ICDrawingViewController *viewController; // @synthesize viewController=_viewController;
- (struct CGAffineTransform)transformToAccountForViewOrientationAndSize;
- (id)undoManager;
- (void)updateImage;
- (void)updateLayerImageFrame;
- (void)updateLayerImageFrameAnimationDuration:(double)arg1;
- (struct CGAffineTransform)viewOrientationTransform;
- (struct CGAffineTransform)viewOrientationTransformForOrientation:(long long)arg1;
- (struct UIView *)viewToPresentAttachmentFrom;

@end

