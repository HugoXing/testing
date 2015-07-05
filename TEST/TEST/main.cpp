//
//  main.cpp
//  TEST
//
//  Created by XING Wei on 03/07/2015.
//  Copyright (c) 2015 Wei. All rights reserved.
//
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

class G{

    int i;
public:
    G(int ii);
};

G::G(int ii){
    i = ii;
}

int main(){
    int retval = 0;
    cin >> retval;
    G g(retval);
    
}


