//
//  enigma.hpp
//  ENIGMA
//
//  Created by Sébastien Guilloton on 03/10/2018.
//  Copyright © 2018 Cyrano86. All rights reserved.
//
#include <iostream>

#ifndef enigma_h
#define enigma_h

class Reflector
{
private :
    int* reflection;
    
public :
    Reflector();
    int reflect(int i);
    ~Reflector();
};

#endif /* enigma_h */
