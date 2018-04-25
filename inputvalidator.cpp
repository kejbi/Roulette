//
// Created by biega on 19.03.2018.
//

#include <iostream>
#include "inputvalidator.h"

bool InputValidator::numberTest(int a, int b, int in) {
    if(in<a || in>b){
        std::cout<<"Wrong number"<<std::endl;
        return 0;
    }
    return 1;
}
bool InputValidator::numberTest(int a, int in) {
    if(in<a){
        std::cout<<"Wrong number"<<std::endl;
        return 0;
    }
    return 1;
}
bool InputValidator::fileTest(std::fstream &file, std::string name){
    file.open(name,std::ios::in);
    if(file.good()){
        file.close();
        return 1;
    }
    else{
        std::cout<<"File error"<<std::endl;
        file.close();
        return 0;
    }

}

bool InputValidator::lengthTest(std::string name, int l) {
    if(name.length()<=l){
        return true;
    }
    return false;

}

