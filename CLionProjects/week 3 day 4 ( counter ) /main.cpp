#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.

void counter(int n) {
    if (n != 0) {
        std::cout << (n - 1) << std::endl;
        counter(n - 1);
    }
}

int main() {

    int input;
    std::cout << "type in a number i will count down to 0" << std::endl;
    std::cin >> input;
    counter(input);


    return 0;
}