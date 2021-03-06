//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class NSString;

@interface IBAbstractStoryboardSegueTemplate : NSObject <IBDocumentArchiving, NSCoding>
{
    NSString *_identifier;
    NSString *_trigger;
    NSString *_segueClassName;
    NSString *_destinationControllerIdentifier;
}

+ (id)segueTemplateWithIdentifier:(id)arg1 trigger:(id)arg2 segueClassName:(id)arg3 destinationControllerIdentifier:(id)arg4;
+ (BOOL)requiresDestinationControllerIdentifier;
+ (id)codingKeyForPropertyName:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(copy) NSString *trigger; // @synthesize trigger=_trigger;
@property(copy) NSString *destinationControllerIdentifier; // @synthesize destinationControllerIdentifier=_destinationControllerIdentifier;
@property(copy) NSString *segueClassName; // @synthesize segueClassName=_segueClassName;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

