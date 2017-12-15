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
        
        string animalType = filename.substr(0, filename.length()-4);
        
        while(!infile.eof()){
            
            infile >> str;
            stringstream row(str); string item; std::vector<string> items(8);
            
            std::fill(items.begin(), items.end(), "N/A");
            
            int index = 0;
            
            while(getline(row, item, ',')){
                if(index == items.size()) break;
                if(!(item.empty())) items.at(index++) = item;
            }
            
            if(animalType == "Cats"){
                
                Cat* mum = nullptr;
                Cat* dad = nullptr;
                
                Cat cat(items.at(1), items.at(0), items.at(2), items.at(4), items.at(3), items.at(5), dad, mum);
                
                if(items.at(6) != "N/A") cats.getParent(cat, items.at(6), false, false);
                if(items.at(7) != "N/A") cats.getParent(cat, items.at(7), true, false);
                
                cats.add(cat);
                
            }else if(animalType == "Dogs"){
                
                Dog* mum = nullptr;
                Dog* dad = nullptr;
                
                Dog dog(items.at(1), items.at(0), items.at(2), items.at(4), items.at(3), items.at(5), dad, mum);
                
                if(items.at(6) != "N/A") dogs.getParent(dog, items.at(6), false, false);
                if(items.at(7) != "N/A") dogs.getParent(dog, items.at(7), true, false);
                
                dogs.add(dog);
                
            }else if(animalType == "Horses"){
                
                Horse* mum = nullptr;
                Horse* dad = nullptr;
                
                Horse horse(items.at(1), items.at(0), items.at(2), items.at(4), items.at(3), items.at(5), dad, mum);
                
                if(items.at(6) != "N/A") dad = horses.getParent(horse, items.at(6), false, false);
                if(items.at(7) != "N/A") mum = horses.getParent(horse, items.at(7), true, false);
                
                horses.add(horse);
                
            }else{
            }
        }
        if(animalType == "Dogs"){
            dogs.setParent();
            dogs.printList();
            cout << "End of Dogs" << endl;
        }
        if(animalType == "Cats"){
            cats.setParent();
            cats.printList();
            cout << "End of Cats" << endl;
        }
        if(animalType == "Horses"){
            horses.setParent();
            horses.printList();
        }
    }
}
