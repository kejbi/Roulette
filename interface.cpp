//
// Created by kejbi on 24.04.18.
//

#include "interface.h"

void Interface::run() {
    std::cout<<"############################\n"
            "#     Kacper Biegajski     #\n"
            "#    Roulette the Game     #\n"
            "############################"<<std::endl;
    std::cout<<"\n1. New Game\n2. Load Game\n3. Quit"<<std::endl;
    readChoice(1,3);
    switch(choice){
        case 1:
            newGame();

    }
}

void Interface::readChoice(int a, int b) {
    do{
        std::cin>>choice;
    }
    while(!iv.numberTest(a,b,choice));
}

void Interface::newGame() {

    readName(15);
    pl.setName(n);
    readAmount(1);
    pl.setCredits(amount);

}

void Interface::readName(int l) {
    std::cout<<"Enter your name"<<std::endl;
    do{
        std::cin>>n;
    }
    while(!iv.lengthTest(n,l));

}

void Interface::readAmount(int a) {
    std::cout<<"Enter amount of starting credits (max 1000)"<<std::endl;
    do{
        std::cin>>amount;
    }
    while(!iv.numberTest(a,1000,amount));
}

void Interface::startGame() {
    while(choice!=0){
        std::cout<<"===============\n"
                "\n"
                "===============\n"
                "\n"
                "Credits: "<<pl.getCredits()<<
                "1. Bet color\t2. Bet value\t3. Save game\t0. Main menu"<<std::endl;
        readChoice(0,3);
        switch(choice){
            case 1:
                makeBetColor();
                spinning();
                break;
            case 2:
                spinning();
                makeBetValue();
                break;
            case 3:
                saveGame();
                break;
            default:break;

        }


    }
}

void Interface::makeBetColor() {
    betCredits();
    std::cout<<"Which color do you want to bet?\n"
            "1. Black   2. Red"<<std::endl;
    do{
        std::cin>>choice;
    }
    while(!iv.numberTest(1,2,choice));
    switch(choice){
        case 1:
            b.betColor(amount,black,2);
            break;
        case 2:
            b.betColor(amount,red,2);
            break;

    }
}

void Interface::betCredits() {
    std::cout<<"How many credits do you want to bet?"<<std::endl;
    do{
        std::cin>>amount;
    }
    while(!iv.numberTest(1,pl.getCredits(),amount));
}

void Interface::makeBetValue() {
    betCredits();
    std::cout<<"Which number do you want to bet?"<<std::endl;
    do{
        std::cin>>choice;
    }
    while(!iv.numberTest(0,36,choice));
}
