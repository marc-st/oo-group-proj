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

#include "Dog.h"
#include "Cat.h"
#include "Horse.h"

//Parser::Parser(){}

//Parser::~Parser(){}

void Parser::readFile(string filename){
    
    ifstream infile(filename.c_str());
    
    if (!infile.is_open())
        perror("error while opening file");

    if(infile){
        
        string str;
        
        while(!infile.eof()){
            
            infile >> str;
            stringstream row(str); string item; std::vector<string> items(8);
            
            std::fill(items.begin(), items.end(), "N/A");
            
            int index = 0;
            
            while(getline(row, item, ',')){
                if(index == items.size()) break;
                if(!(item.empty())) items.at(index++) = item;
            }
            
            string animalType = filename.substr(0, filename.length()-1);
            
            if(animalType == "Cats"){
                
                Cat* mum = nullptr;
                Cat* dad = nullptr;
                
                if(items.at(6) != "N/A") mum = cats.getParent(items.at(6));
                if(items.at(7) != "N/A") dad = cats.getParent(items.at(7));
                    
                Cat cat(items.at(0), items.at(1), items.at(2), items.at(3), items.at(4), items.at(5), mum, dad);
                cats.add(cat);
                
            }else if(animalType == "Dogs"){
                
                Dog* mum = nullptr;
                Dog* dad = nullptr;
                
                if(items.at(7) != "N/A") mum = dogs.getParent(items.at(6));
                if(items.at(8) != "N/A") dad = dogs.getParent(items.at(7));
                
                Dog dog(items.at(0), items.at(1), items.at(2), items.at(3), items.at(4), items.at(5), mum, dad);
                dogs.add(dog);
                
            }else if(animalType == "Horses"){
                
                Horse* mum = nullptr;
                Horse* dad = nullptr;
                
                if(items.at(7) != "N/A") mum = horses.getParent(items.at(6));
                if(items.at(8) != "N/A") dad = horses.getParent(items.at(7));
                
                Horse horse(items.at(0), items.at(1), items.at(2), items.at(3), items.at(4), items.at(5), mum, dad);
                horses.add(horse);
                
            }else{
            }
        }
        dogs.printList();
    }
}
