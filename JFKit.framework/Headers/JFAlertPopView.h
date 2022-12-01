//
//  JFAlertPopView.h
//  JFKit
//
//  Created by MAC on 2022/6/28.
//  Copyright © 2022 Alan Wang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFAlertPopView : UIView

+ (void)showAlertPopWithTitle:(NSString *)titleStr items:(NSArray *)items completeBlock:(void(^)(NSInteger indexSel))completeBlock;

@end

NS_ASSUME_NONNULL_END
