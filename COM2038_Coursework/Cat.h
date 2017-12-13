//
//  Cat.h
//  COM2038_Coursework
//
//  Created by Marc Stevens on 12/12/2017.
//  Copyright © 2017 Marc Stevens. All rights reserved.
//

#ifndef CAT_H
#define CAT_H

using namespace std;
#include <string>
#include "Animal.h"

class Cat : public Animal{
protected:
    string earType;
    string tailColour;
    Cat* dad;
    Cat* mom;
public:
    Cat(string name, string breed, string colour, string height,
        string earType, string tailColour, Cat* dad, Cat* mom)
    :
    Animal(name, breed, colour, height), earType(earType), tailColour(tailColour),
    dad(dad), mom(mom) {}
};

#endif /* CAT_H */
