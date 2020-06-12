//
// Created by Terence Machine on 2020/5/31.
//
#pragma once

#include "cocos2d.h"

class WelcomeScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

    // implement the "static create()" method manually
    //实现静态创建方法
    CREATE_FUNC(WelcomeScene);

    //跳转到菜单界面
    void replace2MenuScene();
};
