//
// Created by Gáspár Máté on 2019-02-03.
//

#include "animal.h"
#include <iostream>

Animal::Animal()
{

    _hunger = 50;
    _thirst = 50;

}

void Animal::eat()
{

    _hunger--;
    std::cout << "Hunger is: " << _hunger << std::endl;
};

void Animal::drink()
{

    _thirst--;
    std::cout << "Thirst is: " << _thirst << std::endl;
};

void Animal::play()
{

    _thirst++;
    _hunger++;

};

int Animal::howHungry()
{

    return _hunger;
}