//
//  QNLimitTextView.h
//  QNView
//
//  Created by QNRZMac on 15/5/7.
//  Copyright (c) 2015年 Sunline. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JFTextView;
@class JFLimitTextView;
@protocol JFLimitTextViewDelegate <NSObject>

- (void)limitTextViewTextIsOutOfRange:(BOOL)isOutOfRange;

@optional
- (BOOL)limitTextViewShouldBeginEditing:(JFLimitTextView*)limitTextView;

- (void)limitTextViewTextDidChange:(JFLimitTextView*)limitTextView;

- (BOOL)limitTextViewShouldEndEditing:(JFLimitTextView*)limitTextView;



@end


@interface JFLimitTextView : UIView

@property (nonatomic,strong)JFTextView * textView;

@property (nonatomic,assign)NSInteger limitNum;

//右下角 标志
@property (nonatomic,strong)UILabel * cornerLabel;

@property (nonatomic,strong)UIFont * tipsFont;

@property (nonatomic,strong)UIFont * textFont;

@property (nonatomic,copy)NSString * text;

@property (nonatomic,weak) id <JFLimitTextViewDelegate> delegate;

@property (nonatomic,assign,readonly)NSInteger curLimitNum;

@property (nonatomic,assign,readonly) BOOL isOutOfRange;

@end
