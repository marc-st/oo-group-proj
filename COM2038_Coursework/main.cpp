//
//  main.cpp
//  COM2038_Coursework
//
//  Created by Marc Stevens on 12/12/2017.
//  Copyright © 2017 Marc Stevens. All rights reserved.
//

#include <iostream>
#include "Parser.h"

int main() {

    Parser p; // initalise parser object
    
    // read the files into Parser
    p.readFile("Dogs.csv");
    //p.readFile("Cats.csv");
    //p.readFile("Horses.csv");
    
    return 0;
}
