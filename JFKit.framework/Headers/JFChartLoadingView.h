//
//  JFChartLoadingView.h
//  SLAppProduct
//
//  Created by Jianbo Cai on 2018/4/16.
//  Copyright © 2018年 Sunline. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, SLLoadingState) {
    SLLoadingStateBegin,
    SLLoadingStateFinish,
    SLLoadingStateError,
};

typedef void(^LoadingViewRefreshHandle)(void);

@interface JFChartLoadingView : UIView

@property (nonatomic, copy) LoadingViewRefreshHandle loadingViewRefreshHandle;

- (void)setLoadingState:(SLLoadingState)state StateDescrib:(NSString *)des;

@end
