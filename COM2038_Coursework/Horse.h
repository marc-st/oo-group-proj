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
    
    void setDad(Horse *horse) { dad = horse; }
    Horse* getDad() { return dad; }
    
    void setMum(Horse *horse) { mom = horse; }
    
    string print(){
        
        string dadName = "N/A"; string momName = "N/A";
        
        if(dad != nullptr) dadName = (*dad).name;
        if(mom != nullptr) momName = (*mom).name;
        
        return name + "  " + "Dog" + "  " + breed + "  " + colour + "  " + height + "  " + earType
        + "  " + tailColour + "  " + dadName + "  " + momName;
    }
};
#endif /* HORSE_H */
