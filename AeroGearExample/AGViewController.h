//
//  AGViewController.h
//  AeroGearExample
//
//  Created by Corinne Krych on 5/13/13.
//  Copyright (c) 2013 red hat. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AGViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end
