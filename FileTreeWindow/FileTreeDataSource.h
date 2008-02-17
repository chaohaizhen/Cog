//
//  FileTreeDataSource.h
//  Cog
//
//  Created by Vincent Spader on 10/14/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class PathNode;

@interface FileTreeDataSource : NSObject {
	PathNode *rootNode;

	IBOutlet NSOutlineView *outlineView;
}

- (NSURL *)rootURL;
- (void)setRootURL:(NSURL *)rootURL;

- (void)reloadPathNode:(PathNode *)item;

@end