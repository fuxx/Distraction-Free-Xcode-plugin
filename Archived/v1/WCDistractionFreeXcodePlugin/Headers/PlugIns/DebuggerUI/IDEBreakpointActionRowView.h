//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class IDEBreakpointAction, NSArray, NSButton, NSMutableArray, NSPopUpButton, NSSet, NSViewController;

@interface IDEBreakpointActionRowView : NSView
{
    NSArray *_privateConstraints;
    id <IDEBreakpointActionRowDelegate> _delegate;
    NSPopUpButton *_actionsPopup;
    NSButton *_addActionButton;
    NSButton *_deleteActionButton;
    NSSet *_breakpointActionEditorExtensions;
    BOOL _selectedActionEditorWantsToBeOnRight;
    NSMutableArray *_actions;
    IDEBreakpointAction *_selectedAction;
    NSViewController *_seletedActionEditorViewController;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain) IDEBreakpointAction *selectedAction; // @synthesize selectedAction=_selectedAction;
- (void).cxx_destruct;
- (void)_removeClicked:(id)arg1;
- (void)_addClicked:(id)arg1;
- (void)_actionSelected:(id)arg1;
- (id)_extensionForBreakpointAction:(id)arg1;
- (id)_breakpointActionEditorExtensions;
- (void)_createAndAddSelectedActionsEditor:(id)arg1;
- (id)_titlesForActions;
- (id)_createActions;
- (id)_generateConstraints;
- (void)_updateActionsWithUserAction;
- (void)viewDidMoveToWindow;
- (id)_createAddOrRemoveButton:(id)arg1;
- (void)_createAndAddDeleteActionButton;
- (void)_createAndAddAddActionButton;
- (void)_createAndAddActionsPopUpButton;
- (id)initWithAction:(id)arg1 andDelegate:(id)arg2;

@end

