//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class DSANode, NSArray, NSImage, NSString;

@interface DSANodeDocumentTypeCollection : NSObject <NSCopying>
{
    NSArray *_nodes;
    NSString *_name;
    DSANode *_primaryParent;
    NSImage *_image;
}

+ (id)collectionWithName:(id)arg1 nodes:(id)arg2 parentNode:(id)arg3 image:(id)arg4;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(retain) DSANode *primaryParent; // @synthesize primaryParent=_primaryParent;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSArray *nodes; // @synthesize nodes=_nodes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

