//
//  Horse.h
//  COM2038_Coursework
//
//  Created by Marc Stevens on 12/12/2017.
//  Copyright © 2017 Marc Stevens. All rights reserved.
//

using namespace std;
#include <string>
class Horse : public Animal{
protected:
    string earType;
    string tailColour;
    Horse* dad;
    Horse* mom;
public:
    Horse(string name, string breed, string colour, string height,
        string earType, string tailColour, Horse* dad, Horse* mom){}
    ~Horse();
    
};
