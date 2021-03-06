//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEBatchFindable.h>

@class IDEEditorDocument;

@interface IDEBatchDocumentFindable : IDEBatchFindable
{
    IDEEditorDocument *_document;
    id <DVTTextFindable> _textFindable;
    BOOL _usesSharedDocument;
    BOOL _requiresMainThreadAccess;
}

+ (BOOL)findableCanHandleFile:(id)arg1 forFindDescriptor:(id)arg2;
- (void).cxx_destruct;
- (BOOL)_loadTextFindable;
- (void)performFind;
- (void)main;
- (id)initWithFindDescriptor:(id)arg1 onFile:(id)arg2 inWorkspace:(id)arg3;

@end

