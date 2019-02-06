//
// Created by Gáspár Máté on 2019-02-03.
//

#include "farm.h"
#include "animal.h"
#include <iostream>

void Farm::slaughter() {

    int maxHunger = 0;
    if(vectorOfAnimal->size()!=0) {


        std::cout << "There is no animal left to kill" << std::endl;
    }else{

        for (int i = 0; i < vectorOfAnimal->size(); i++ ){

        if(vectorOfAnimal[i].howHungry()> maxHunger)


        }

    }

};



viod breed() {



};