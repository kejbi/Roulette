//
// Created by kejbi on 24.04.18.
//

#include "roulette.h"

Roulette::Roulette() {
    int numbers[]={0,32,15,19,4,21,2,25,17,34,6,27,13,36,11,30,8,23,10,5,24,16,33,1,20,14,31,9,22,18,29,7,28,12,35,3,26};
    for(int i=0;i<37;i++){
        if(i==0){
            RouletteTile rt(0,green);
            tab.add_element(rt);
        }
        else if(i%2==1){
            RouletteTile rt(numbers[i],red);
            tab.add_element(rt);
        }
        else{
            RouletteTile rt(numbers[i],black);
            tab.add_element(rt);
        }

    }

}

void Roulette::spin() {
    int move=rand()%38;
    for(int i=0;i<move;i++){
        tab.next();
    }

}

color Roulette::getColor() {
    return tab.getActualContent().getColor();
}

int Roulette::getValue() {
    return tab.getActualContent().getValue();
}


