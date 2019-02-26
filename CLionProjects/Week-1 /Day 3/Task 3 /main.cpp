#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `numbers`
    //   with the following content: `[4, 5, 6, 7]`
    // - Print all the elements of `numbers`


int numbers [] = {4,5,6,7,6,10,11,22};

for (int i = 0; i < 8 ; ++i) {

    std::cout << numbers [i] << std::endl;

    }

    return 0;

}