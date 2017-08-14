//
//  AttendanceTableViewCell.h
//  LeaderSystems
//
//  Created by 刘艳凯 on 2017/6/8.
//  Copyright © 2017年 YiTu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AttendanceTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *headImg;
@property (weak, nonatomic) IBOutlet UILabel *nameLb;
@property (weak, nonatomic) IBOutlet UILabel *phoneLb;
@property (weak, nonatomic) IBOutlet UILabel *workTypeLb;

@end