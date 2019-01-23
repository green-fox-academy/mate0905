#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <vector>
#include <sstream>

int main () {

    std::ofstream ofile("my-file.txt");

    ofile << "// Write a program that opens a file called \"my-file.txt\", then prints\n"
             "// each of lines form the file.\n"
             "// You have to create the file, you can use C-programming but it is not mandatory";
    ofile.close();

    std::string line, text;

    std::ifstream myfile;

    myfile.open("my-file.txt");

    while(std::getline(myfile, line)) {

        std::cout << line << std::endl;
    }
    myfile.close();

    return 0;
}