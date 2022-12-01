//
//  HYNoNetView.h
//  Chainup
//
//  Created by victor lau on 2018/7/11.
//  Copyright © 2018年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFKitMacro.h"


@protocol HYRetryDelegate <NSObject>

- (void)noNetRetryClick;

@end

@interface HYNoNetView : UIView

@property (nonatomic) HYEmptyImageType  emptyType;
@property (nonatomic) CGFloat viewHeight;

@property (nonatomic,strong) UIImage * image;
@property (nonatomic,strong)  NSString * title;
@property (nonatomic,weak) id <HYRetryDelegate> delegate;


- (void)retryClick:(UIControl *)sender;



@end
