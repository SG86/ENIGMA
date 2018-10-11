//
//  enigma.cpp
//  ENIGMA
//
//  Created by Sébastien Guilloton on 03/10/2018.
//  Copyright © 2018 Cyrano86. All rights reserved.
//
#include "enigma.hpp"

char index_to_char(int i){
    char c;
    c= i+65;
    return c;
}

int char_to_index(char c){
    int i;
    i=(int) c - 65;
    return i;
}


Reflector::Reflector(){
    
    this->reflection = (int*) malloc(26*sizeof(int));
    
    for(int i=0 ; i<26 ; i++)
    {
        this->reflection[i] = 25 - i;
    }
    //this->reflection = {5,22,17,12,25,0,9,16,23,6,24,13,3,11,20,19,7,2,21,15,14,18,1,8,10,4};
}

int Reflector::reflect(int i){
    return this->reflection[i];
}

Reflector::~Reflector(){
    //free(this->reflection);
}


Machine::Machine(){
    this->plaintext = (char*) malloc(100*sizeof(char));
    this->ref = Reflector();
}

Machine::~Machine(){
    free(this->plaintext);
}

void Machine::cipher(){
    int i=0;
    
    std::cout << "Please type your plain text message : " ;
    std::cin >> this->plaintext;
    
    while(this->plaintext[i] != '\0')
    {
        std::cout << index_to_char(this->ref.reflect(char_to_index(this->plaintext[i])));
        i++;
    }
    std::cout << std::endl;
}
