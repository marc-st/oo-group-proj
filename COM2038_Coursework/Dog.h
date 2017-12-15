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
    Dog* dad;
public:
    
    Dog(string name, string breed, string colour, string height,
        string earType, string tailColour, Dog* dad, Dog* mom)
    :
    Animal(name, breed, colour, height), earType(earType), tailColour(tailColour),
    dad(dad), mom(mom){}
    
    void setDad(Dog *dog) { dad = dog; }
    Dog* getDad() { return dad; }
    
    void setMum(Dog *dog) { mom = dog; }
    
    string print(){
        
        string dadName = "N/A"; string momName = "N/A";
        
        if(dad != nullptr) dadName = (*dad).name;
        if(mom != nullptr) momName = (*mom).name;
        
        return name + "  " + "Dog" + "  " + breed + "  " + colour + "  " + height + "  " + earType
        + "  " + tailColour + "  " + dadName + "  " + momName;
    }
};

#endif /* DOG_H */
