//
// Created by kejbi on 24.04.18.
//

#include <unistd.h>
#include "interface.h"

void Interface::run() {
    while(running){
        system("clear");
        std::cout<<"############################\n"
            "#     Kacper Biegajski     #\n"
            "#    Roulette the Game     #\n"
            "############################"<<std::endl;
        std::cout<<"\n1. New Game\n2. Load Game\n3. Quit"<<std::endl;
        readChoice(1,3);
        switch(choice){
            case 1:
                newGame();
                startGame();
                break;
            case 2:
                if(loadGame()) {
                    startGame();
                }
                break;
            case 3:
                running=0;
                break;
        }
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
        system("clear");
        std::cout<<"===============\n"
                "\n"
                "===============\n"
                "\n"
                "Credits: "<<pl.getCredits()<<
                "\n1. Bet color\t2. Bet value\t3. Save game\t0. Main menu"<<std::endl;
        readChoice(0,3);
        switch(choice){
            case 1:
                makeBetColor();
                spinning();
                break;
            case 2:
                makeBetValue();
                spinning();
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
    b.betValue(amount,choice,30);
}

void Interface::spinning() {
    system("clear");
    std::cout<<"===============\n"
            "    SPINNING   \n"
            "===============\n"
            "\n"
            "Credits: "<<pl.getCredits()<<"\n"
            "Your bet: "<<b.getBetCredits()<<" on ";
    if(b.getBetColor()==none){
        std::cout<<b.getBetValue()<<std::endl;
    }
    else{
        if(b.getBetColor()==black){
            std::cout<<"black"<<std::endl;
        }
        else{
            std::cout<<"red"<<std::endl;
        }
    }
    r.spin();
    sleep(2);
    system("clear");
    std::cout<<"===============\n"
            "    "<<r.getActual()<<"   \n"
            "===============\n"
            "\n"
            "Credits: "<<pl.getCredits()<<"\n"
            "Your bet: "<<b.getBetCredits()<<" on ";
    if(b.getBetColor()==none){
        std::cout<<b.getBetValue()<<std::endl;
    }
    else{
        if(b.getBetColor()==black){
            std::cout<<"black"<<std::endl;
        }
        else{
            std::cout<<"red"<<std::endl;
        }
    }
    if(b.goodBet(r.getColor(),r.getValue())){
        if((long)b.getMultiplier()*(long)b.getBetCredits()+(long)pl.getCredits()>2147483646){
            std::cout<<"Casino run out of money, you won everything!"<<std::endl;
            choice=0;
        }
        else{
            std::cout<<"You won: "<<b.getMultiplier()*b.getBetCredits()<<std::endl;
            pl.addCredits(b.getMultiplier()*b.getBetCredits());
        }
    }
    else{
        std::cout<<"You lost: "<<b.getBetCredits()<<std::endl;
        pl.takeCredits(b.getBetCredits());
        if(pl.getCredits()==0){
            std::cout<<"You lost everything :C"<<std::endl;
            choice=0;
        }
    }
    std::cout<<"Click anything to go further"<<std::endl;
    std::cin>>gofurther;
}

void Interface::saveGame() {
    system("clear");
    std::cout<<"Give me the save-file name, please!"<<std::endl;
    std::cin>>n;
    sl.saveGame(n,pl);

}

bool Interface::loadGame() {
    system("clear");
    std::cout<<"Give me the save-file name, please!"<<std::endl;
    std::cin>>n;
    if(iv.fileTest(f,n)){
        sl.loadGame(n,pl);
        return true;
    }
    else{
        return false;
    }

}
