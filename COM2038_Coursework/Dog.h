//
//  Dog.h
//  COM2038_Coursework
//
//  Created by Marc Stevens on 12/12/2017.
//  Copyright © 2017 Marc Stevens. All rights reserved.
//

#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

#include "Animal.h"

class Dog : public Animal{
protected:
    string earType;
    string tailColour;
    Dog* mom;
public:
    Dog* dad;
    Dog(string name, string breed, string colour, string height,
        string earType, string tailColour, Dog* dad, Dog* mom)
    :
    Animal(name, breed, colour, height), earType(earType), tailColour(tailColour),
    dad(dad), mom(mom){}
};

#endif /* DOG_H */
