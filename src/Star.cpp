//
//  Star.cpp
//  sound_hanabi
//
//  Created by 藤野宏樹 on 2015/09/05.
//
//

#include "Star.h"
#include <math.h>


void Star::setup(){
    for(int i = 0; i < STAR; i++){
        pos[i].x = ofRandomuf()*ofGetWidth();
        pos[i].y = ofRandomuf()*ofGetHeight();
        circle_size[i] = ofRandom(1, 5);
        r[i] = ofRandomuf() * 255;
        g[i] = ofRandomuf() * 255;
        b[i] = ofRandomuf() * 255;
    }
}

void Star::update(){
    
}

void Star::draw(){
    for(int i = 0; i < STAR; i++){
        ofSetColor(r[i], g[i], b[i]);
        ofSetPolyMode(OF_POLY_WINDING_NONZERO); // this is the normal mode
        ofBeginShape();
        ofVertex(pos[i].x + cos((1.0/5.0)*2*M_PI) * circle_size[i], pos[i].y + sin((1.0/5.0)*2*M_PI) * circle_size[i]);
        ofVertex(pos[i].x + cos((2.0/5.0)*2*M_PI) * circle_size[i], pos[i].y + sin((2.0/5.0)*2*M_PI) * circle_size[i]);
        ofVertex(pos[i].x + cos((3.0/5.0)*2*M_PI) * circle_size[i], pos[i].y + sin((3.0/5.0)*2*M_PI) * circle_size[i]);
        ofVertex(pos[i].x + cos((4.0/5.0)*2*M_PI) * circle_size[i], pos[i].y + sin((4.0/5.0)*2*M_PI) * circle_size[i]);
        ofVertex(pos[i].x + cos((5.0/5.0)*2*M_PI) * circle_size[i], pos[i].y + sin((5.0/5.0)*2*M_PI) * circle_size[i]);
        ofEndShape();
    }
}