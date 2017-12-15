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
    T* getParent(T animal, string name, bool mum, bool set);
    void findParents(string name);
    void setParent();
    void printList();
private:
    vector<T> myArray;
    vector<T> animalWithParents;
    vector<string> dadNames;
    vector<string> mumNames;
};

//function to add item of type T to member array
template <typename T>
void AnimalList<T>::add(T add){
    myArray.push_back(add);
}

//function that passes string name and return parent object
template<typename T>
T* AnimalList<T>::getParent(T animal, string name, bool mum, bool set){
    if(set){
        for (unsigned i=0; i < myArray.size(); i++) {
            if(myArray[i].name == name){
                return &myArray[i];
            }
        }
    }else{
        if(mum) mumNames.push_back(name);
        else{
            animalWithParents.push_back(animal);
            dadNames.push_back(name);
        }
    }
    return nullptr;
}

template<typename T>
void AnimalList<T>::setParent(){
    for(unsigned i = 0; i < animalWithParents.size(); i++){
        for(unsigned j = 0; j < myArray.size(); j++){
            if(myArray[j].name == animalWithParents[i].name){
                myArray[j].setDad(getParent(myArray[j], dadNames[i], false, true));
                myArray[j].setMum(getParent(myArray[j], mumNames[i], true, true));
            }
        }
    }
}

template<typename T>
void AnimalList<T>::printList(){
    for(unsigned i = 0; i < myArray.size(); i++) {
        cout << myArray[i].print() << endl;
    }
}

template<typename T>
void AnimalList<T>::findParents(string name){
    
    cout << name << " ->";
    
    for(unsigned i = 0; i < myArray.size(); i++){
        if(myArray[i].name == name){
            if(myArray[i].getDad() != nullptr){
                findParents((myArray[i].getDad()) -> name);
                cout << "[END]" << endl;
                return;
            }
        }
    }
}

