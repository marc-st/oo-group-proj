//
//  Animal.h
//  COM2038_Coursework
//
//  Created by Marc Stevens on 12/12/2017.
//  Copyright © 2017 Marc Stevens. All rights reserved.
//
using namespace std;
#include <string>
class Animal {
public:
    Animal(string name, string breed, string colour, string height)
    :
    name(name), breed(breed), colour(colour), height(height) {}
    
protected:
    string name;
    string breed;
    string colour;
    string height;
};
