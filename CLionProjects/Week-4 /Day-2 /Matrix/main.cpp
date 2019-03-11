#include <iostream>
#include <vector>

bool isSymmetric(std::vector<std::vector<int>> matrix)
{
    for (int i = 0; i < matrix.size(); ++i) {

        for (int j = 0; j < matrix[i].size(); ++j) {

            if (matrix[i][j] != matrix[j][i]){

                return false;
            }
        }
    }

    return true;
}













int main() {



    return 0;
}
// Create a function named `isSymmetric`
//that takes an n×n integer matrix (two dimensional array/list) as a parameter
//and returns true if the matrix is symmetric
//or false if it is not.
//(Symmetric means it has identical values along its diagonal axis from top-left to bottom-right,
//as in the first example)

//Example 1:

//  [1, 0, 1],
//  [0, 2, 2],
//  [1, 2, 5]

//Output:
//true

//Example 2:

//  [7, 7, 7],
//  [6, 5, 7],
//  [1, 2, 1]

//Output:
//false

