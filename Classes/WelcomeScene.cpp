//
// Created by Terence Machine on 2020/5/31.
//

#include "WelcomeScene.h"
#include "MenuScene.h"

USING_NS_CC;

Scene* WelcomeScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();

    // 'layer' is an autorelease object
    auto layer = WelcomeScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool WelcomeScene::init()
{
    // 1. super init first
    if (!Layer::init())
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getWinSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    // add "HelloWorld" splash screen
    auto sprite = Sprite::create("img/welcome.jpg");

    // position the sprite on the center of the screen
    sprite->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(sprite, 0);

    //跳转到菜单页面
    this->runAction(Sequence::create(
            DelayTime::create(1.0f),
            CallFunc::create(CC_CALLBACK_0(WelcomeScene::replace2MenuScene, this)),
            NULL));

    return true;
}

void WelcomeScene::replace2MenuScene(){
    auto scene = MenuScene::createScene();
    Director::getInstance()->replaceScene(scene);
//    auto trans =TransitionCrossFade::create(1.5f, scene);
//    Director::getInstance()->replaceScene(trans);
}