//
// Created by Terence Machine on 2020/6/4.
//

#pragma once
#include "cocos2d.h"
#include "CSVParser.h"

USING_NS_CC;
using namespace CSVParser;

class GameDataManager {

public:
    static GameDataManager* getInstance();
    static GameDataManager* singleInstance;

    GameDataManager();
    ~GameDataManager();

    virtual bool init();

public:
    void loadGameData(int level);
    int getObsBallNum(int level);
    int getUserBallNum(int level);
    int getRotateSpeed(int level);
    int getRotateDir(int level);
    int getStartAngle(int level);
    int getEndAngle(int level);
    bool getIsFirstInit();
    void setIsFirstInit(bool init);
    int getCurrentMaxLevel();
    void setCurrentMaxLevel(int level);

public:
    //初始出现的小球数
    int obsBallNum;
    //用户的小球数
    int userBallNum;
    //旋转的速度
    int rotateSpeed;
    //旋转的方向
    int rotateDir;
    //总行数
    int totalRow;
    //遮罩圆开始角度
    int startAngle;
    //遮罩圆开始角度
    int endAngle;
private:
    Csv csv;
};
