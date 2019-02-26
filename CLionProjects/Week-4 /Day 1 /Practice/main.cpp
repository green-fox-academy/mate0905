#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>

int main()
{
    //open file
    std::ifstream fileToCount;
    try {
        fileToCount.open("countchar.txt"); //make sure the txt is next to the exe
        if (!fileToCount.is_open()) {
            throw 1;
        }
    } catch (...) {
        std::cout << "File does not exist!" << std::endl;
    }

    //count characters
    std::string currentLine;
    std::map<char, int> characterCount;

    while (getline(fileToCount, currentLine)) {
        //making sure every character is handled the same
        std::transform(currentLine.begin(),currentLine.end(),currentLine.begin(),::tolower);
        for (char i : currentLine) {
            if (i != ' ') {
                if (characterCount.find(i) == characterCount.end()) {
                    characterCount.insert(std::make_pair(i, 1));
                } else {
                    characterCount.at(i) += 1;
                }
            }
        }
    }

    std::pair<char, int> maxChar = std::make_pair(' ', 0);
    //iterating trough every element in map
    for (const auto& character : characterCount) {
        if (character.second > maxChar.second) {
            maxChar = character;
        }
    }

    std::cout << "The most common character is: '" << maxChar.first << "'" << std::endl;
    std::cout << "There is " << maxChar.second << " occurrences" << std::endl;

    return 0;
}