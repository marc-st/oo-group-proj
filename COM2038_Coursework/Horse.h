//
//  Horse.h
//  COM2038_Coursework
//
//  Created by Marc Stevens on 12/12/2017.
//  Copyright © 2017 Marc Stevens. All rights reserved.
//

#ifndef HORSE_H
#define HORSE_H

using namespace std;
#include <string>
#include "Animal.h"

class Horse : public Animal{
protected:
    string earType;
    string tailColour;
    Horse* dad;
    Horse* mom;
public:
    Horse(string name, string breed, string colour, string height,
          string earType, string tailColour, Horse* dad, Horse* mom)
    :
    Animal(name, breed, colour, height), earType(earType), tailColour(tailColour),
    dad(dad), mom(mom) {}    
};
#endif /* HORSE_H */
