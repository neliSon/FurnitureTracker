//
//  MasterViewController.h
//  FurnitureTracker
//
//  Created by Nelson Chow on 2016-04-01.
//  Copyright © 2016 Nelson Chow. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

