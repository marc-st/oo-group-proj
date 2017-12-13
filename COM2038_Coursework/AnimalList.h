//
//  AnimalList.h
//  COM2038_Coursework
//
//  Created by Marc Stevens on 13/12/2017.
//  Copyright © 2017 Marc Stevens. All rights reserved.
//
#include <string>
#include <sstream>
#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class AnimalList {
public:
    void add(T toAdd);
    T* getParent(string name);
private:
    vector<T> myArray;
};

//function to add item of type T to member array
template <typename T>
void AnimalList<T>::add(T add){
    myArray.push_back(add);
}

//function that passes string name and return parent object
template<typename T>
T* AnimalList<T>::getParent(string name){
    for (unsigned i=0; i < myArray.size(); i++) {
        if(myArray[i].name == name){
            return &myArray[i];
        }
    }
    return nullptr;
}

