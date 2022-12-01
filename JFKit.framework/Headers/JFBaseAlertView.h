//
//  JFBaseAlertView.h
//  弹窗哈哈哈
//
//  Created by Alan Wang on 2018/11/8.
//  Copyright © 2018 kuaijiankang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFAlertAction.h"

typedef NS_ENUM(NSInteger, JFAlertViewStyle) {
    JFAlertViewStyleAlert = 1,
    JFAlertViewStyleActionSheet = 2,
    JFAlertViewStyleCustomActionSheet = 3, //2.0专用的
    JFAlertViewStyleCustomViewOnly    //只显示自定义视图不添加任何控件
};

typedef NS_ENUM(NSInteger, JFAlertViewAnimation) {
    JFAlertViewAnimationNone = 1,
    JFAlertViewAnimationPullDown = 2//向下拉开
};

@interface JFBaseAlertView : UIView
/** 自定义弹窗容器视图 */
@property (nonatomic,strong) UIView   *customcontentView;
@property(nonatomic,copy) NSString * title;
@property(nonatomic,strong) UIColor * titleColor;
@property(nonatomic,copy) NSString * subtitle;
@property(nonatomic,strong) UIColor * subtitleColor;
@property(nonatomic,copy) NSString * message;
@property(nonatomic,strong) UIColor * messageColor;
@property(nonatomic,copy) NSString * tips;
@property(nonatomic,strong) UIColor * tipsColor;
@property(nonatomic,assign) CGFloat  messageMaxHeight;
@property(nonatomic)        NSTextAlignment    messageTextAlignment;
@property(nonatomic,assign) JFAlertViewStyle style;

@property (nonatomic, assign) BOOL isShowBgImg;
//是否是自定义
@property(nonatomic,assign) BOOL isCustom;
//JFAlertViewStyleActionSheet 风格的时候是否需要显示分割线
@property(nonatomic,assign) BOOL showSplitLine;
//自定义的时候底部和按钮的间隔
@property(nonatomic,assign) CGFloat btnOffset;
//是否需要开启点击按钮隐藏弹框
@property(nonatomic,assign) BOOL closeAutoHide;

//承载视图容器
@property (nonatomic,strong) UIView   *contentView;

//背景板
@property(nonatomic,strong) UIControl * shodowView;

//是否能点击背景隐藏
@property(nonatomic,assign) BOOL clickBackGroundHide;

//是否需要模糊背景
@property(nonatomic,assign) BOOL blur;

//是否有框已经弹出
@property(nonatomic,assign) BOOL isShowView;

@property(nonatomic,copy)   AlertActionBlock  dismissBlock;

//显示时Y轴偏移
@property(nonatomic,assign)   CGFloat  yOffset;

@property (nonatomic, assign) BOOL showImgBg;

@property (nonatomic,strong) NSMutableArray<JFAlertAction*>* actionArr;
-(void)show;
-(void)showWithAnimation:(JFAlertViewAnimation)animationType;
-(void)showFromView:(UIView*)view;
-(void)hide;
+(void)hideAll;

//建议:自定义展示视图(自定义视图需要有size)的时候需要调用该方法 用于扩展弹框类型
-(void)showCustomView:(UIView*)view;
//获取按钮
-(UIButton*)getActionBtnView:(NSInteger)tagOrindex;
@end
