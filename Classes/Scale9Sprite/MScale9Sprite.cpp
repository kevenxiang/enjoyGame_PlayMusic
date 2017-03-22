//
//  Scale9Sprite.cpp
//  enjoyGame_PlayMusic
//
//  Created by xiang on 2017/3/22.
//
//

#include "MScale9Sprite.hpp"
#include "cocos-ext.h"

using namespace cocos2d::extension;
USING_NS_CC;

Scene *MScale9Sprite::createScene() {
    
    auto scene = Scene::create();
    
    auto layer = MScale9Sprite::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool MScale9Sprite::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //正常状态下的按钮图片
    Scale9Sprite *btnNormal = Scale9Sprite::create("button.png");
    
    //单击状态下的按钮图片
    Scale9Sprite *btnDown = Scale9Sprite::create("buttonHighlighted.png");
    
    //按钮标题
    auto title = Label::createWithTTF("Touch Me!", "fonts/Marker Felt.ttf", 30);
    
    //创建按钮，按钮的大小会根据标题自动调整
    ControlButton *controlBtn = ControlButton::create(title, btnNormal);
    
    //设置按钮按下时的图片
    controlBtn->setBackgroundSpriteForState(btnDown, Control::State::HIGH_LIGHTED);
    
    controlBtn->setPosition(Vec2(200, 200));
    this->addChild(controlBtn);
    
    return true;
}




















