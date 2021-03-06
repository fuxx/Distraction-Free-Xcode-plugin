//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface IDEToybox : NSObject <DVTInvalidation>
{
    NSMutableArray *_toys;
    NSMutableDictionary *_toysRegisteredForAllResultSubjectsByChannel;
    NSMutableDictionary *_toysRegisteredForResultSubjectsByChannel;
    NSMutableDictionary *_currentResultsBySubjectByChannel;
    NSDate *_incomingEarliestResultDate;
    NSDate *_incomingLatestResultDate;
    unsigned long long _currentExecutionGeneration;
    BOOL _didClearAllRegisteredToys;
    BOOL _includesLiveToy;
    BOOL _executionIsInProgress;
    BOOL _isReplayingSerializedResults;
    BOOL _lastExpressionDidComplete;
    id <IDEToyboxDocumentLocationDelegate> _documentLocationDelegate;
    NSDate *_dateOfEarliestResultForCurrentExecutionGeneration;
    NSDate *_dateOfLatestResultForCurrentExecutionGeneration;
}

+ (id)toyboxWithXMLElement:(id)arg1 enclosingFileWrapper:(id)arg2 documentLocationDelegate:(id)arg3 error:(id *)arg4;
+ (void)initialize;
@property BOOL lastExpressionDidComplete; // @synthesize lastExpressionDidComplete=_lastExpressionDidComplete;
@property BOOL isReplayingSerializedResults; // @synthesize isReplayingSerializedResults=_isReplayingSerializedResults;
@property BOOL executionIsInProgress; // @synthesize executionIsInProgress=_executionIsInProgress;
@property(copy) NSDate *dateOfLatestResultForCurrentExecutionGeneration; // @synthesize dateOfLatestResultForCurrentExecutionGeneration=_dateOfLatestResultForCurrentExecutionGeneration;
@property(copy) NSDate *dateOfEarliestResultForCurrentExecutionGeneration; // @synthesize dateOfEarliestResultForCurrentExecutionGeneration=_dateOfEarliestResultForCurrentExecutionGeneration;
@property(readonly) BOOL includesLiveToy; // @synthesize includesLiveToy=_includesLiveToy;
@property(readonly) id <IDEToyboxDocumentLocationDelegate> documentLocationDelegate; // @synthesize documentLocationDelegate=_documentLocationDelegate;
- (void).cxx_destruct;
- (void)addTimelineItems:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)xmlData;
- (void)saveToPlaygroundXMLElement:(id)arg1 playgroundFileWrapper:(id)arg2;
- (void)primitiveInvalidate;
- (void)unregisterToy:(id)arg1 forResultsForChannelIdentifier:(id)arg2 subjectIdentifier:(id)arg3;
- (id)registerToy:(id)arg1 forResultsForChannelIdentifier:(id)arg2 subjectIdentifier:(id)arg3;
- (id)toysWithChannelIdentifier:(id)arg1 subjectIdentifier:(id)arg2 createIfNeeded:(BOOL)arg3 toyCreationBlock:(CDUnknownBlockType)arg4;
@property(readonly) unsigned long long currentExecutionGeneration;
- (id)currentResultsForChannelIdentifier:(id)arg1 subjectIdentifier:(id)arg2;
- (void)removeToy:(id)arg1;
- (void)addToy:(id)arg1;
- (void)processPlaygroundResult:(id)arg1 createIfNeeded:(BOOL)arg2 toyCreationBlock:(CDUnknownBlockType)arg3;
- (void)executionGenerationDidEndAndCompleted:(BOOL)arg1;
- (void)executionGenerationWillEnd;
- (void)beginExecutionGeneration:(unsigned long long)arg1 isReplayingSerializedResults:(BOOL)arg2;
- (id)initWithDocumentLocationDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableArray *mutableToys; // @dynamic mutableToys;
@property(readonly) Class superclass;
@property(copy) NSArray *toys; // @dynamic toys;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

