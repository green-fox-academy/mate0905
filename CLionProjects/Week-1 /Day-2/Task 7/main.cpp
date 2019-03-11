
#include <iostream>
#include <string>

int sum(int num [ ], int size);

int main(int argc, char* args[]) {


    int numbers[] = {11,22,33,44,55};

    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer
std::cout<< sum(numbers, 5)<<std::endl;
    return 0;
}


int sum(int num [ ], int size){

    int sum = 0;

    for (int i = 0; i < size; i++) {

        sum += num[i];
    }
    return sum;
}

