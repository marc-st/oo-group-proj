//
//  Dog.h
//  COM2038_Coursework
//
//  Created by Marc Stevens on 12/12/2017.
//  Copyright © 2017 Marc Stevens. All rights reserved.
//

using namespace std;
#include <string>
class Dog : public Animal{
protected:
    string earType;
    string tailColour;
    Dog* dad;
    Dog* mom;
public:
    Dog(string name, string breed, string colour, string height,
        string earType, string tailColour, Dog* dad, Dog* mom){}
    ~Dog();
    
};
