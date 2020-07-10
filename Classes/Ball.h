//
// Created by Terence Machine on 2020/6/15.
//

#pragma once
#include "cocos2d.h"

USING_NS_CC;

class Ball : public Sprite {
public:
    Label * numTTF;

public:
    Ball();
    ~Ball();

    static Ball *create(int num = 0);
};

