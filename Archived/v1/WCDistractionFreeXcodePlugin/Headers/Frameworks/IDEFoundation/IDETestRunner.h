//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDERunnable, NSArray, NSMutableArray, NSMutableSet, NSSet;

@interface IDETestRunner : NSObject
{
    NSMutableArray *_skippedTests;
    NSMutableArray *_testResults;
    NSMutableSet *_runningTests;
    id <IDETestable> _testable;
    IDERunnable *_host;
    id <IDETestingSpecifier> _testingSpecifier;
}

+ (void)initialize;
@property(retain) IDERunnable *host; // @synthesize host=_host;
@property(retain) id <IDETestingSpecifier> testingSpecifier; // @synthesize testingSpecifier=_testingSpecifier;
@property(retain) id <IDETestable> testable; // @synthesize testable=_testable;
- (void).cxx_destruct;
- (void)willRunTest:(id)arg1;
- (void)didRunTest:(id)arg1 withResult:(id)arg2;
- (id)defaultTestArgumentsOperationForBuildParameters:(id)arg1 launchParameters:(id)arg2 runDestination:(id)arg3 workspace:(id)arg4 error:(id *)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)defaultTestEnvironmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
- (id)testOperationsForExecutionEnvironment:(id)arg1 buildParameters:(id)arg2 runDestination:(id)arg3 workspace:(id)arg4 testOperationErrorBlock:(CDUnknownBlockType)arg5 error:(id *)arg6 launchParametersBlock:(CDUnknownBlockType)arg7;
- (id)testOperationsForExecutionEnvironment:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 runDestination:(id)arg4 workspace:(id)arg5 error:(id *)arg6 launchParametersBlock:(CDUnknownBlockType)arg7;
- (id)testHostRunnableForRunDestination:(id)arg1 buildParameters:(id)arg2 outError:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly) NSMutableArray *mutableRunningTests; // @dynamic mutableRunningTests;
@property(readonly) NSMutableArray *mutableSkippedTests; // @dynamic mutableSkippedTests;
@property(readonly) NSMutableArray *mutableTestResults; // @dynamic mutableTestResults;
@property(copy) NSSet *runningTests; // @dynamic runningTests;
@property(copy) NSArray *skippedTests; // @dynamic skippedTests;
@property(copy) NSArray *testResults; // @dynamic testResults;

@end

