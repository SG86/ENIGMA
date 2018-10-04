//
//  main.cpp
//  ENIGMA
//
//  Created by Sébastien Guilloton on 03/10/2018.
//  Copyright © 2018 Cyrano86. All rights reserved.
//

#include "enigma.hpp"

char index_to_char(int i);
int char_to_index(char c);

int main(int argc, const char * argv[]) {
    char c;
    Reflector R = Reflector();
    
    std::cout << "Entrez un caractère : ";
    std::cin >> c;
    std::cout << index_to_char(R.reflect(char_to_index(c))) << std::endl;
    
    /* test du reflecteur
    for(int i=0 ; i<26 ; i++)
    {
        c = i+65;
        std::cout << c << ",";
    }
    std::cout << "}"<< std::endl;
    
    std::cout << "{";
    for(int i=0 ; i<26 ; i++)
    {
        c = i+65;
        std::cout << index_to_char(R.reflect(char_to_index(c))) << ",";
    }
    std::cout << "}"<< std::endl;
     */
    
    return 0;
}

char index_to_char(int i)
{
    char c;
    c= i+65;
    return c;
}

int char_to_index(char c)
{
    int i;
    i=(int) c - 65;
    return i;
}
