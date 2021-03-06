//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildPhaseViewController.h>

#import "Xcode3BuildPhaseFiltering.h"

@class DVTStackView_ML, NSArray, NSButton, NSPopUpButton, NSString, NSTextField, NSView, PBXCopyFilesBuildPhase, Xcode3CopyFilesInnerFileBuildPhaseViewController;

@interface Xcode3CopyFilesBuildPhaseViewController : Xcode3BuildPhaseViewController <Xcode3BuildPhaseFiltering>
{
    NSPopUpButton *_destinationPopUp;
    NSTextField *_pathField;
    NSButton *_copyOnInstallCheckbox;
    DVTStackView_ML *_stackView;
    NSView *_settingsBox;
    Xcode3CopyFilesInnerFileBuildPhaseViewController *_fileViewController;
    NSArray *_destinations;
    long long _destinationIndex;
}

+ (id)keyPathsForValuesAffectingPathLabel;
+ (id)keyPathsForValuesAffectingDestination;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property long long destinationIndex; // @synthesize destinationIndex=_destinationIndex;
- (void).cxx_destruct;
- (BOOL)capsuleView:(id)arg1 acceptDrop:(id)arg2;
- (unsigned long long)capsuleView:(id)arg1 validateDrop:(id)arg2;
- (id)supportedDragTypes;
@property(readonly) BOOL hasSearchResults;
@property(copy) NSString *searchString;
- (BOOL)canRemoveItems;
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
- (void)_setSettingsEnabled:(BOOL)arg1;
@property(readonly) PBXCopyFilesBuildPhase *_copyFilesBuildPhase;
- (id)titleForDisplay;
- (void)changedDestinationOrPath:(id)arg1;
@property(readonly) NSString *pathLabel;
- (id)destination;
- (id)nibName;
- (void)loadView;
- (id)_bestDestinationForUserData;
- (void)primitiveInvalidate;
- (id)initWithBuildPhase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

