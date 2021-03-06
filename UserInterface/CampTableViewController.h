//
//  CampTableViewController.h
//  iBurn
//
//  Created by Jeffrey Johnson on 2009-01-12.
//  Copyright 2009 Burning Man Earth. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CampTableCell.h"


@interface CampTableViewController : UITableViewController <CellMapLinkDelegate>{
	IBOutlet UITableView * campsTable;
	IBOutlet UISearchBar *searchBar;
	UIActivityIndicatorView * activityIndicator;
	NSMutableArray * camps;
	id<CellMapLinkDelegate> mapDelegate;
	
	// a temporary item; added to the "camps" array one at a time, and cleared for the next one
	NSMutableDictionary * item;

}

@property (nonatomic, retain, readwrite) id<CellMapLinkDelegate> mapDelegate;

-(void)zoomMapToLocation:(double)latitude: (double) longitude;

@end
