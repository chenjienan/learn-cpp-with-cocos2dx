//
// Created by Terence Machine on 2020/6/1.
//

#include "MenuScene.h"
#include "Defines.h"

USING_NS_CC;

Scene* MenuScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();

    // 'layer' is an autorelease object
    auto layer = MenuScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool MenuScene::init()
{
    //////////////////////////////
    // 1. super init first
    if (!Layer::init())
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getWinSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    //绘制背景
    auto bg = Sprite::create("menu/background.jpg");
    bg->setPosition(WINSIZE/2);
    float spx = bg->getTextureRect().getMaxX();
    float spy = bg->getTextureRect().getMaxY();
    bg->setScale(WINSIZE.width/spx,WINSIZE.height/spy);
    this->addChild(bg);

    //标题
    auto title = Sprite::create("menu/title.png");
    title->setPosition(Vec2(WINSIZE.width/2,WINSIZE.height-100));
    spx = title->getTextureRect().getMaxX();
    title->setScale(WINSIZE.width*0.8f/spx,WINSIZE.width*0.8f/spx);
    this->addChild(title);

//    //关卡数字
//    auto levelTTF = Label::createWithTTF("","fonts/I-PenCrane-B-2.ttf", 30);
//    levelTTF->setString(StringUtils::format("第 %d 關",GlobalManager::getInstance()->currentLevel));
//    levelTTF->setColor(Color3B(142.0f/255.0f,72.0f/255.0f,12.0f/255.0f));
//    levelTTF->setPosition(Vec2(WINSIZE.width/2,WINSIZE.height-200));
//    this->addChild(levelTTF);

    //按钮
    auto startBtn = MenuItemImage::create("menu/start.png", "menu/start.png");
    startBtn->initWithCallback(CC_CALLBACK_1(MenuScene::onStartBtnPressed, this));
    startBtn->setPosition(WINSIZE.width/2, WINSIZE.height-300);

    auto menu = Menu::create(startBtn,NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu);

    //选关文字
    auto selectTTF = Label::createWithTTF("選擇關卡", "fonts/I-PenCrane-B-2.ttf", 30);
    selectTTF->setColor(Color3B(142.0f/255.0f,72.0f/255.0f,12.0f/255.0f));
    selectTTF->setPosition(WINSIZE.width/2, WINSIZE.height-400);
    this->addChild(selectTTF);


    return true;
}

//开始游戏
void MenuScene::onStartBtnPressed(Ref* pSender) {
    //需要跳转到游戏界面
}

//选择关卡
void MenuScene::onSelectBtnPressed(Ref* pSender) {
    //需要跳转到选择关卡界面
}