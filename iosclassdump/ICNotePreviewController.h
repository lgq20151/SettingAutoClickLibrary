//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextViewDelegate.h"

@class ICNote, ICTextController, ICTextView, NSString, NotesBackgroundView;

@interface ICNotePreviewController : UIViewController <UITextViewDelegate>
{
    ICNote *_note;
    ICTextView *_textView;
    ICTextController *_textController;
}

- (void).cxx_destruct;
- (void)addPasswordEntryViewController;
@property(readonly, nonatomic) NotesBackgroundView *backgroundView;
- (id)createTextViewUsingTextController:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(_Bool)arg2;
- (_Bool)isNotePasswordProtectedAndLocked;
@property(retain, nonatomic) ICNote *note; // @synthesize note=_note;
- (id)previewMenuItems;
@property(retain, nonatomic) ICTextController *textController; // @synthesize textController=_textController;
@property(retain, nonatomic) ICTextView *textView; // @synthesize textView=_textView;
- (void)setupPreview;
- (void)shareNote;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
