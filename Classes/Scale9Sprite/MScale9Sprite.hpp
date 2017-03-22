//
//  Scale9Sprite.hpp
//  enjoyGame_PlayMusic
//
//  Created by xiang on 2017/3/22.
//
//

#ifndef MScale9Sprite_hpp
#define MScale9Sprite_hpp

#include <stdio.h>
#include "cocos2d.h"

class MScale9Sprite : public cocos2d::Layer {
    
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(MScale9Sprite);
};

#endif /* Scale9Sprite_hpp */
