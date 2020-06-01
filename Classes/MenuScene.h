//
// Created by Terence Machine on 2020/6/1.
//

#pragma once

#include "cocos2d.h"

class MenuScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(MenuScene);
    //开始游戏
    void onStartBtnPressed(Ref* pSender);
    //选择关卡
    void onSelectBtnPressed(Ref* pSender);
};