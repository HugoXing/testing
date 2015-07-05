//
//  main.cpp
//  TEST
//
//  Created by XING Wei on 03/07/2015.
//  Copyright (c) 2015 Wei. All rights reserved.
//

#include <iostream>

extern int i;
extern float f(float);

float b;
float f(float a){
    return a + 0.1;
}

int i;
int h(int x){
    return x*1;
}



int main(int argc, const char * argv[]) {
    b = 0;
    i = 2;
    f(b);
    h(i);
}
