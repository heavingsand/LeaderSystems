//
//  LeaderAccount.h
//  LeaderSystems
//
//  Created by 刘艳凯 on 2017/6/8.
//  Copyright © 2017年 YiTu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LeaderAccount : NSObject
@property (nonatomic, copy) NSString *leader_account_name;
@property (nonatomic, copy) NSString *leader_account_phone;
@property (nonatomic, assign) NSInteger leader_account_id;
@property (nonatomic, assign) NSInteger leader_account_age;
@property (nonatomic, copy) NSString *leader_account_sex;


@end
