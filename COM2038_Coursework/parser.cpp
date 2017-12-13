//
//  parser.cpp
//  COM2038_Coursework
//
//  Created by Marc Stevens on 12/12/2017.
//  Copyright © 2017 Marc Stevens. All rights reserved.
//

#include "Parser.h"

#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>

#include <Cat.h>
#include <Dog.h>
#include <Horse.h>

//Parser::Parser(){}

//Parser::~Parser(){}

void Parser::readFile(string filename){
    
    ifstream infile(filename.c_str());
    
    if (!infile.is_open())
        perror("error while opening file");

    while(infile){
        
        string str;
        
        while(!infile.eof()){
            
            infile >> str;
            stringstream row(str); string item; std::vector<string> items;
            
            while(getline(row, item, ',')){
                items.push_back(item);
            }
            
            for (auto i: items){
                cout << i << ' ' ;
            }
            cout << "end of item!" << endl;

            
            // make Cat/Dog/Horse object
            string animalType = filename.substr(0, filename.length()-1);
            if(animalType == "Cats"){
               Cat cat(items.at(0), items.at(1), items.at(2), items.at(3), items.at(4), items.at(5), items.at(6), items.at(7));
            }else if(animalType == "Dogs"){
                Dog dog(items.at(0), items.at(1), items.at(2), items.at(3), items.at(4), items.at(5), items.at(6), items.at(7));
            }else if(animalType == "Horses"){
                Horse horse(items.at(0), items.at(1), items.at(2), items.at(3), items.at(4), items.at(5), items.at(6), items.at(7));
            }else{
            }
            
            // add object to respective Array/List
        }
    }
}



