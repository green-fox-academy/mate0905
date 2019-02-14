#include <iostream>
#include <vector>

std::vector<std::vector<int>> compareMatrix(std::vector<std::vector<int>> matrix1,
                                            std::vector<std::vector<int>> matrix2);
int main()
{
    std::vector<std::vector<int>> matrix1 = {{2, 1},
                                             {0, 1}};

    std::vector<std::vector<int>> matrix2 = {{0,  3},
                                             {-1, 1}};

    std::vector<std::vector<int>> resultMatrix = compareMatrix (matrix1, matrix2);

    for (int i = 0; i < resultMatrix.size(); ++i) {

        for (int j = 0; j < resultMatrix.size(); ++j) {


            std::cout << resultMatrix[i][j] <<',';
        }
            std::cout << std::endl;
    }

    return 0;
}

std::vector<std::vector<int>> compareMatrix(std::vector<std::vector<int>> matrix1,
                                            std::vector<std::vector<int>> matrix2)
{
    std::vector<std::vector<int>> gainMatrix;

    gainMatrix.resize(matrix1.size());

    for (int i = 0; i < matrix1.size(); ++i) {

        gainMatrix[i].resize(matrix1.size());

        for (int j = 0; j < matrix1.size(); ++j) {

            if (matrix1[i][j] < matrix2[i][j]) {

                gainMatrix[i][j] = matrix2[i][j];

            } else {

                gainMatrix[i][j] = matrix1[i][j];

            }
        }
    }
    return gainMatrix;
}

