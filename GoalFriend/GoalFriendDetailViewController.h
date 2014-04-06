//
//  GoalFriendDetailViewController.h
//  GoalFriend
//
//  Created by Bob Gardner on 4/6/14.
//  Copyright (c) 2014 Ansbacher/Gardner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GoalFriendDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
