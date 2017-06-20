//
//  ELCycleVerticalView.h
//  CycleVerticalView
//
//  Created by etouch on 16/11/1.
//  Copyright © 2016年 EL. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ELCycleVerticalView;
typedef NS_ENUM(NSInteger, ELCycleVerticalViewScrollDirection) {
    ELCycleVerticalViewScrollDirectionUp = 0,
    ELCycleVerticalViewScrollDirectionDown
};
@protocol ELCycleVerticalViewDelegate <NSObject>
// 当前点击数据源的第几个item
- (void)elCycleVerticalView:(ELCycleVerticalView *)view didClickItemIndex:(NSInteger)index;
@end

@interface ELCycleVerticalView : UIView

@property (nonatomic, strong) NSArray *dataSource;                              // 数据源
@property (nonatomic, assign) double showTime;                                  // 展示时间 默认3s 在设置数据源之前设置
@property (nonatomic, assign) double animationTime;                             // 动画时间 默认0.5s
@property (nonatomic, assign) ELCycleVerticalViewScrollDirection  direction;    // 滚动方向 默认为往上滚动
@property (nonatomic, weak) id<ELCycleVerticalViewDelegate> delegate;

// 开启动画 (主要用于进入其他页面返回时开启)
- (void)startAnimation;

// 关闭动画 (进入其他页面时调用)
- (void)stopAnimation;
@end
