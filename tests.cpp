//
// Created by kejbi on 25.04.18.
//

#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "circullar_list.h"
#include "roulettetile.h"
#include "roulette.h"
#include "player.h"
#include "saveload.h"
#include "bets.h"

TEST_CASE("Circullarlist test","[circullar],[list]"){
    CircullarList<int> cli;
    CircullarList<char> clc;
    for(int i=0;i<5;i++){
        cli.add_element(i);
    }
    for(int i=0;i<5;i++){
        clc.add_element('a'+i);
    }
    REQUIRE(cli.getActualContent()==0);
    cli.next();
    REQUIRE(cli.getActualContent()==1);
    REQUIRE(clc.getActualContent()=='a');
    clc.next();
    REQUIRE(clc.getActualContent()=='b');
    for(int i=0;i<4;i++){
        cli.next();
    }
    REQUIRE(cli.getActualContent()==0);
}

TEST_CASE("RouletteTile test","[roulette],[tile]"){
    RouletteTile rt(13,black);
    REQUIRE(rt.getValue()==13);
    REQUIRE(rt.getColor()==black);
    rt.setColor(green);
    rt.setValue(30);
    REQUIRE(rt.getValue()==30);
    REQUIRE(rt.getColor()==green);
}
TEST_CASE("Roulette test","[roulette]"){
    Roulette r;
    REQUIRE(r.getActual().getColor()==green);
    REQUIRE(r.getActual().getValue()==0);
    REQUIRE(r.getColor()==green);
    REQUIRE(r.getValue()==0);

}
TEST_CASE("Player test","[player]"){
    Player p(200,"zbychu");
    REQUIRE(p.getCredits()==200);
    REQUIRE(p.getName()=="zbychu");
    p.addCredits(500);
    REQUIRE(p.getCredits()==700);
    p.takeCredits(300);
    REQUIRE(p.getCredits()==400);

}
TEST_CASE("SaveLoad test","[save],[load]"){
    SaveLoad sl;
    Player p(300,"player");
    sl.saveGame("test.txt",p);
    p.setCredits(1);
    p.setName("nothing");
    sl.loadGame("test.txt",p);
    REQUIRE(p.getCredits()==300);
    REQUIRE(p.getName()=="player");
}
TEST_CASE("Bets test","[test]"){
    Bets b;
    b.betValue(200,13,1);
    REQUIRE(b.goodBet(black,13)==true);
    REQUIRE(b.goodBet(red,13)==true);
    REQUIRE(b.goodBet(red,1)==false);
    b.betColor(200,red,4);
    REQUIRE(b.goodBet(red,14)==true);
    REQUIRE(b.goodBet(black,4)==false);
}