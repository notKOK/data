//
// Created by danila on 25.07.2020.
//
#include <iostream>
#include "data.h"

template <class T>
void recordmethod(std::fstream &file){
    T smth;
    std::cin >> smth;
    file.getline(smth, sizeof(smth));
    file << ' ';
}