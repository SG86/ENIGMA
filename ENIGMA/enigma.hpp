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

char index_to_char(int i);
int char_to_index(char c);

class Reflector{
private :
    int* reflection;
    
public :
    Reflector();
    int reflect(int i);
    ~Reflector();
};

class Machine{
    private :
        char* plaintext;
        char* ciphertext;
        Reflector ref;
    
    public :
        Machine();
        void cipher();
        ~Machine();
};

#endif /* enigma_h */
