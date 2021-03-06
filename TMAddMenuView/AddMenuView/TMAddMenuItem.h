//
//  TMAddMenuItem.h
//  TMAddMenuView
//
//  Created by Apple on 2017/8/24.
//  Copyright © 2017年 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TMEnumerate.h"

@interface TMAddMenuItem : NSObject

@property (nonatomic , assign) TMAddMenuType type;

@property (nonatomic , strong) NSString *title;

@property (nonatomic , strong) NSString *iconPath;

@property (nonatomic , strong) NSString *className;

/**
 Create TMAddMenuItem

 @param type 类型
 @param title 标题
 @param iconPath 图片链接
 @param className 类名
 @return item
 */
+ (TMAddMenuItem *)createItemWithType:(TMAddMenuType)type title:(NSString *)title iconPath:(NSString *)iconPath className:(NSString *)className;

@end
