//
//  Animal.h
//  COM2038_Coursework
//
//  Created by Marc Stevens on 12/12/2017.
//  Copyright © 2017 Marc Stevens. All rights reserved.
//

#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;
#include <string>

class Animal {
public:
    Animal(string name, string breed, string colour, string height)
    :
    name(name), breed(breed), colour(colour), height(height) {}
    string name;
    
protected:
    string breed;
    string colour;
    string height;
};

#endif /* ANIMAL_H */
