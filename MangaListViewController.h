//
//  MangaListViewController.h
//  iMAL
//
//  Created by Stefano Pigozzi on 8/6/09.
//  Copyright 2009 Stefano Pigozzi. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface MangaListViewController : NSViewController {
	NSManagedObjectContext * __db;
}

@property (retain) NSManagedObjectContext * __db;

-(id)initWithContext:(NSManagedObjectContext *) db;

@end