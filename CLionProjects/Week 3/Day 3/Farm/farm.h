//
// Created by Gáspár Máté on 2019-02-03.
//

#ifndef WEEK_3_DAY_5_FARM_FARM_H
#define WEEK_3_DAY_5_FARM_FARM_H
#include "animal.h"
#include <list>
#include <vector>



class Farm {
public:



    std::vector <Animal> vectorOfAnimal[100];
    int maxIndex = 10;

    void breed();
    void slaughter();

};
#endif //WEEK_3_DAY_5_FARM_FARM_H
