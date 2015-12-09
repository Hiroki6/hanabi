//
//  Star.h
//  sound_hanabi
//
//  Created by 藤野宏樹 on 2015/09/05.
//
//

#ifndef __sound_hanabi__Star__
#define __sound_hanabi__Star__

#include <stdio.h>
#include "ofMain.h"

#endif /* defined(__sound_hanabi__Star__) */
#define STAR 100

class Star{
    
public:
    void setup();
    void update();
    void draw();
    
    ofPoint pos[STAR]; // 中心点
    int circle_size[STAR]; // 星のサイズ
    int r[STAR],g[STAR],b[STAR];
};
