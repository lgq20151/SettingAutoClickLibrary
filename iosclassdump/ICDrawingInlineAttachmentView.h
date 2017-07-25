//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAttachmentView.h"

@class ICDrawingInlineView;

@interface ICDrawingInlineAttachmentView : ICAttachmentView
{
    ICDrawingInlineView *_drawingInlineView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect boundsForDisplay;
- (void)dealloc;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didTapAttachment:(id)arg1;
@property(retain, nonatomic) ICDrawingInlineView *drawingInlineView; // @synthesize drawingInlineView=_drawingInlineView;
- (id)initWithTextAttachment:(id)arg1 forManualRendering:(_Bool)arg2;
- (void)setAttachment:(id)arg1;
- (void)setAttachmentContentSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)sharedInit;

@end
