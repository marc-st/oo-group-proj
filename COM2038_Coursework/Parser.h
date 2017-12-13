//
//  Parser.h
//  COM2038_Coursework
//
//  Created by Marc Stevens on 12/12/2017.
//  Copyright © 2017 Marc Stevens. All rights reserved.
//

#include "Dog.h"
#include "Cat.h"
#include "Horse.h"
#include "AnimalList.h"

#include <string>
using namespace std;

class Parser {
public:
    //Parser();
    //~Parser();
    void readFile(string file);
protected:
    AnimalList<Dog> dogs;
    AnimalList<Cat> cats;
    AnimalList<Horse> horses;
};
