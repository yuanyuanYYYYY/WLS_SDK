//
//  GKPhotoBrowserConfigure.h
//  GKPhotoBrowser
//
//  Created by QuintGao on 2017/10/23.
//  Copyright © 2017年 QuintGao. All rights reserved.
//

#ifndef GKPhotoBrowserConfigure_h
#define GKPhotoBrowserConfigure_h

#import "UIImage+GKDecoder.h"
#import "UIScrollView+GKGestureHandle.h"
#import <SDWebImage/UIView+WebCache.h>
#import <SDWebImage/UIImageView+WebCache.h>
#import <SDWebImage/SDWebImageManager.h>

#define GKScreenW [UIScreen mainScreen].bounds.size.width
#define GKScreenH [UIScreen mainScreen].bounds.size.height

#define kMaxZoomScale               2.0f

#define kPhotoViewPadding           10

#define kAnimationDuration          0.25f

#define LOCK(...) dispatch_semaphore_wait(_lock, DISPATCH_TIME_FOREVER); \
__VA_ARGS__; \
dispatch_semaphore_signal(_lock);

#define GKPhotoBrowserSrcName(file) [@"JFInfoResource.bundle" stringByAppendingPathComponent:file]

#define GKPhotoBrowserFrameworkSrcName(file) [@"Frameworks/GKPhotoBrowser.framework/GKPhotoBrowser.bundle" stringByAppendingPathComponent:file]

#define GKPhotoBrowserImage(file)  [UIImage imageNamed:GKPhotoBrowserSrcName(file)] ? : [UIImage imageNamed:GKPhotoBrowserFrameworkSrcName(file)]

// 图片浏览器的显示方式
typedef NS_ENUM(NSUInteger, GKPhotoBrowserShowStyle) {
    GKPhotoBrowserShowStyleNone,       // 直接显示，默认方式
    GKPhotoBrowserShowStyleZoom,       // 缩放显示，动画效果
    GKPhotoBrowserShowStylePush        // push方式展示
};

// 图片浏览器的隐藏方式
typedef NS_ENUM(NSUInteger, GKPhotoBrowserHideStyle) {
    GKPhotoBrowserHideStyleZoom,           // 点击缩放消失
    GKPhotoBrowserHideStyleZoomScale,      // 点击缩放消失、滑动缩小后消失
    GKPhotoBrowserHideStyleZoomSlide       // 点击缩放消失、滑动平移后消失
};

// 图片浏览器的加载方式
typedef NS_ENUM(NSUInteger, GKPhotoBrowserLoadStyle) {
    GKPhotoBrowserLoadStyleIndeterminate,        // 不明确的加载方式
    GKPhotoBrowserLoadStyleIndeterminateMask,    // 不明确的加载方式带阴影
    GKPhotoBrowserLoadStyleDeterminate           // 明确的加载方式带进度条
};

#endif /* GKPhotoBrowserConfigure_h */
