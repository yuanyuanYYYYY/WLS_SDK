//
//  QNLimitTextField.h
//  QNView
//
//  Created by QNRZMac on 15/5/10.
//  Copyright (c) 2015年 Sunline. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JFLimitTextField;
@protocol JFLimitTextFieldDelegate <NSObject>

- (void)limitTextFieldTextIsOutOfRange:(BOOL)isOutOfRange;
@optional
- (BOOL)limitTextFieldShouldBeginEditing:(JFLimitTextField*)limitTextField;

- (void)limitTextFieldTextDidChange:(JFLimitTextField*)limitTextField;

- (BOOL)limitTextFieldShouldEndEditing:(JFLimitTextField*)limitTextField;



@end

@interface JFLimitTextField : UIView<UITextFieldDelegate>
@property (nonatomic,strong)UITextField * textView;

@property (nonatomic,assign)NSInteger limitNum;

//右下角 标志
@property (nonatomic,strong)UILabel * cornerLabel;

@property (nonatomic,strong)UIFont * font;

@property (nonatomic,copy)NSString * text;

@property (nonatomic,weak) id <JFLimitTextFieldDelegate> delegate;

@property (nonatomic,assign,readonly)NSInteger curLimitNum;

@property (nonatomic,assign,readonly) BOOL isOutOfRange;


@end
