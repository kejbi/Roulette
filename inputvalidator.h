//
// Created by biega on 19.03.2018.
//

#ifndef TANKSMAPGENERATOR_INPUTVALIDATOR_H
#define TANKSMAPGENERATOR_INPUTVALIDATOR_H

#include <fstream>

class InputValidator{
public:
    //tests return true if correct, false if not

    bool numberTest(int a, int b, int in); //checks if the number is from range [a,b]
    bool numberTest(int a, int in); //overload method, checks if number is  from range [a, infinity]
    bool fileTest(std::fstream &file, std::string name); //checks if file exists
    bool lengthTest(std::string name, int l);

};

#endif //TANKSMAPGENERATOR_TESTS_H
