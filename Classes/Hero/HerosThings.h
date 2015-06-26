//
//  HerosThings.h
//  BubblePlay
//  物品栏  武器、帽子、衣服、鞋子、戒指、饰品
//  Created by roy on 15/6/26.
//
//

/*******
 武器： 主要是增加子弹伤害
 帽子:  主要增加子弹大小
 衣服： 主要增加生命值
 鞋子: 主要增加移动速度
 戒指: 主要增加物品掉落率
 饰品: 主要增加子弹的特殊型：例如爆炸、穿透等等
 ********/

#ifndef __BubblePlay__HerosThings__
#define __BubblePlay__HerosThings__

#include <stdio.h>
#include "cocos2d.h"
#include "Things.h"

using namespace cocos2d;

class HeroThings {
private:
    cocos2d::Map<Things*, std::string> things;
public:
    Things* getByName(std::string);
    void setThingsByname(std::string,Things*);
};


#endif /* defined(__BubblePlay__HerosThings__) */
