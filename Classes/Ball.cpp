//
// Created by Terence Machine on 2020/6/15.
//

#include "Ball.h"
#include "Defines.h"

Ball::Ball() {

}

Ball::~Ball() {

}

Ball *Ball::create(int num) {
    Ball *ball = new Ball();
    ball->initWithFile("img/luoxuanwan.png");

    if (num != 0) {
        ball->numTTF = Label::create();
        ball->numTTF->setString(to_string(num));
        ball->numTTF->setPosition(ball->getContentSize() / 2);
        ball->addChild(ball->numTTF);
    } else {
        ball->setTexture("img/ball.png");
    }

    return ball;
}
