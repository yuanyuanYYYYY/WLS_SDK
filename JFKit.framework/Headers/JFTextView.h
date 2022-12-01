//
//  SLTextView.h
//  SLView
//
//  Created by Victor on 15/5/10.
//  Copyright (c) 2015年 Sunline. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JFTextView;

@protocol JFTextViewFieldDelegate <NSObject>

- (void)JFTextViewFieldDeleteBackward:(JFTextView *)textViewField;

@end

@interface JFTextView : UITextView

//@property(nonatomic,copy)   NSString               *placeholder;          // default is nil. string is drawn 70% gray
@property (nonatomic, copy  ) NSString  *placeholder;       // default is nil.
@property (nonatomic, strong) UIColor   *placeholderColor;  // default is [UIColor grayColor];
@property (nonatomic, strong) UIFont    *placeholderFont;   // default is TextView Font
@property (nonatomic) CGPoint   placeholderPoint;   // default is (8,8)

@property (nonatomic, weak) id <JFTextViewFieldDelegate> JFTextViewDelegate;

@end
