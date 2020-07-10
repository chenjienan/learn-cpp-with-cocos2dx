//
// Created by Terence Machine on 2020/6/15.
//

#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "Ball.h"

USING_NS_CC;

extern LanguageType type;

class GameScene : public Layer {
public:
    GameScene();
    ~GameScene();

    static Scene* createScene();
    CREATE_FUNC(GameScene);
    virtual bool init();
    bool onTouchBegan(Touch* touch, Event* event);
    void onTouchMoved(Touch* touch, Event* event);
};