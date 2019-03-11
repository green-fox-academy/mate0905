#include <iostream>
#include <fstream>
#include <string>


int main () {

    std::string createdFileName;
    std::cout << "Pleas give me the name of file with extension (something.txt) which you would like to create" << std::endl;
    std::cin >> createdFileName;

    int numberOfLines;
    std::cout << "Pleas give me how many lines would you like to write" << std::endl;
    std::cin >> numberOfLines;
    std::string text;

    std::ofstream createdFile;
    createdFile.open(createdFileName);
    for (int i = 0; i <  numberOfLines; ++i) {
        std::cout << "The text of the " << i + 1 << ".line" << std::endl;
        std::cin >> text;
        createdFile << text << std::endl;
    }
    createdFile.close();

    std::string readableFile;
    std::cout << "Pleas give me the name file with extension (something.txt) which you would like to read" << std::endl;
    std::cin >> readableFile;

    std::ifstream userFile;
    userFile.open(readableFile);
    std::string line;
    while (getline(userFile, line)) {
        std::cout << line << std::endl;
    }
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    return 0;
}