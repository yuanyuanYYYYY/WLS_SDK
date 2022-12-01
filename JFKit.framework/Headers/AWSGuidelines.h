//
//  AWSGuidelines.h
//  SLAppProduct
//
//  Created by Alan Wang on 2018/4/20.
//  Copyright © 2018年 Sunline. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, AWSGuidelinesItemStyle) {
    AWSGuidelinesItemStyle_None,//不需要样式
    AWSGuidelinesItemStyle_Highlight,//高亮
    AWSGuidelinesItemStyle_HighlightDottedline//高亮虚线
};

typedef NS_ENUM(NSUInteger, AWSGuidelinesItemPotionType) {
    AWSGuidelinesItemPotionType_Auto,
    AWSGuidelinesItemPotionType_Top,
    AWSGuidelinesItemPotionType_Left,
    AWSGuidelinesItemPotionType_Right,
    AWSGuidelinesItemPotionType_Bottom
};
typedef NS_ENUM(NSUInteger, AWSGuidelinesType) {
    AWSGuidelinesType_OneByOne,//一步一步进行
    AWSGuidelinesType_Once //一次就全部展示 这个内部未做全部内容的重叠检测 不建议在数据很多使用
};

@interface AWSGuidelinesItem : NSObject
@property(nonatomic,assign) UIView * soureceView;//相对视图
@property(nonatomic,strong) UIView * tipsView;//要展示的图片
//需要展示的位置 AWSGuidelinesItemPotionType_Auto
@property(nonatomic,assign) AWSGuidelinesItemPotionType type;
@property(nonatomic,assign) CGFloat leftMargin;//左侧偏移 针对相对布局有效 解决图片留白问题，正负有效 默认为0
@property(nonatomic,assign) CGFloat topMargin;//顶部偏移 针对相对布局有效 解决图片留白问题，正负有效 默认为0

//项目的样式
@property(nonatomic,assign) AWSGuidelinesItemStyle style;
//对soureceView 视图的size的x 缩减量
@property(nonatomic,assign) CGFloat dx;
//对soureceView 视图的size的y 缩减量
@property(nonatomic,assign) CGFloat dy;
//设定区域绘制透明和虚线 有soureceView 时可不设置 如果有设置 优先取设置的值
@property(nonatomic,assign) CGRect rect;

//如果是虚线的话可以配置虚线颜色 默认是白色
@property(nonatomic,strong) UIColor * lineColor;



@end


@interface AWSGuidelines : NSObject
////引导图类型 AWSGuidelinesType_OneByOne
@property(nonatomic,assign) AWSGuidelinesType type;

-(void)configGuidelinesWithData:(NSArray<AWSGuidelinesItem*>*)itemArr;
-(void)showGuidelines;
-(void)hiddenGuidelines;


//快捷方法
+(instancetype) shareInstance;
+(void)showGuidelinesWithData:(NSArray<AWSGuidelinesItem*>*)itemArr;
@end
