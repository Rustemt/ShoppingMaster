//
//  SettingsViewController.h
//  ShoppingMaster
//
//  Created by Lingkai Kong on 12-6-6.
//  Copyright (c) 2012年 Egibbon Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    NSArray *shopNames;
}

@property (nonatomic, retain) NSArray *shopNames;

-(IBAction)showMainView:(id)sender;


@end
