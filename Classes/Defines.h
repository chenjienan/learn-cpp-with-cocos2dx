//
// Created by Terence Machine on 2020/6/1.
//

#ifndef PROJ_ANDROID_DEFINES_H
#define PROJ_ANDROID_DEFINES_H

#include "cocos2d.h"

USING_NS_CC;
using namespace std;

//屏幕相关
#define WINSIZE (Director::getInstance()->getWinSize())

//可视区域
#define VISIBLE_SIZE (Director::getInstance()->getVisibleSize())

//可视区域起点坐标
#define VISIBLE_ORIGIN_SIZE (Director::getInstance()->getVisibleOrigin())

#endif //PROJ_ANDROID_DEFINES_H
