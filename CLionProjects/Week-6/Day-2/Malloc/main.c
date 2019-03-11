#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits

int main()
{

    int *pointer = NULL;

    int *num_array;

    num_array = (int *) malloc(10 * sizeof(int));

    for (int i = 0; i < 5; ++i) {
        num_array[i] = 5;
    }

    for (int j = 0; j < 10; ++j) {

        printf("%d ", num_array[j]);

    }

    free(num_array);

    return 0;
}