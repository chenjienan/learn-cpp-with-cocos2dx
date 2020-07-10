//
// Created by Terence Machine on 2020/6/1.
//

#pragma once
#include "cocos2d.h"

USING_NS_CC;
using namespace std;

//屏幕大小
#define WINSIZE (Director::getInstance()->getWinSize())

//可视区域
#define VISIBLE_SIZE (Director::getInstance()->getVisibleSize())

//可视区域起点坐标
#define VISIBLE_ORIGIN_SIZE (Director::getInstance()->getVisibleOrigin())

//重写to_string
#if CC_TARGET_PLATFORM == CC_PLATFORM_MAC || \
    CC_TARGET_PLATFORM == CC_PLATFORM_IOS || \
    CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
template<typename T>
string to_string(const T& t) {
    ostringstream os;
    os << t;
    return os.str();
}
#endif