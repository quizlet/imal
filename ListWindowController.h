//
//  ListWindowController.h
//  iMAL
//
//  Created by Stefano Pigozzi on 8/6/09.
//  Copyright 2009 Stefano Pigozzi. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class iMAL_AppDelegate;
@class SearchWindowController;
@class ListViewController;

@interface ListWindowController : NSWindowController {
	IBOutlet iMAL_AppDelegate * __app;	
	SearchWindowController * searchWindowController;
	
	IBOutlet NSView * targetView; // view targeted for switch
	IBOutlet NSPopUpButton * showingList;
	ListViewController * currentViewController;
	
	IBOutlet NSWindow * progressSheet;
	IBOutlet NSProgressIndicator * progressIndicator;
	IBOutlet NSTextField * progressTitle;
	IBOutlet NSTextField * progressMessage;
	
	NSString * increaseString;
	NSString * decreaseString;
	
	IBOutlet NSSearchField * searchField;
}

@property (retain) NSString * increaseString;
@property (retain) NSString * decreaseString;
@property (retain) NSSearchField * searchField;

// TOOLBAR Actions
-(IBAction)showSearchPanel:(id)sender;
-(IBAction)showInfoPanel:(id)sender;
-(IBAction)refeshList:(id)sender;
-(IBAction)viewChoicePopupAction:(id)sender;
-(IBAction)search:(id)sender;
-(IBAction)cancelProgressAction:(id)sender;

// MENU Actions
-(IBAction)increaseEp:(id)sender;
-(IBAction)decreaseEp:(id)sender;

-(ListViewController *)viewController;

-(NSManagedObjectContext *)managedObjectContext;

@end
