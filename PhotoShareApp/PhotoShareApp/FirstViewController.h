//
//  FirstViewController.h
//  PhotoShareApp
//
//  Created by ileadgame on 16/1/27.
//  Copyright © 2016年 ileadgame. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *_tableview;

@end

