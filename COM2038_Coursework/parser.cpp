//
//  parser.cpp
//  COM2038_Coursework
//
//  Created by Marc Stevens on 12/12/2017.
//  Copyright © 2017 Marc Stevens. All rights reserved.
//

#include <stdio.h>
#include "Parser.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

Parser::Parser(){}

Parser::~Parser(){}

void Parser::readFile(string filename){
    ifstream infile(filename);
    
    if(infile.is_open()){
        
        string str;
        
        while(!infile.eof()){
            
            infile >> str;
            stringstream row(str); string item;
            
            string animalType = filename.substr(0, filename.length()-1);
            
            if(animalType == "Cats"){
                // call cat constructor
            }else if(animalType == "Dogs"){
                // call dog constructor
            }else if(animalType == "Horse"){
                // call horse constructor
            }else{
                
            }
            
            while(getline(row, item, ',')){
                
            }
        }
    }
}



