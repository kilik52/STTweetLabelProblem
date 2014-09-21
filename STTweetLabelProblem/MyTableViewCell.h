//
//  MyTableViewCell.h
//  STTweetLabelProblem
//
//  Created by 曦炽 朱 on 14-9-21.
//  Copyright (c) 2014年 mirroon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STTweetLabel.h"

@interface MyTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet STTweetLabel *titleLabel;
@end
