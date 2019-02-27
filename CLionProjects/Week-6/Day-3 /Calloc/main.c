#include <stdio.h>
#include <stdlib.h>

// with calloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits
// what's the difference between this and the previous excersice?

int main()
{
    int *pointer = NULL;

    pointer = (int *) calloc(10, sizeof(int));
    pointer[0] = 0;
    pointer[1] = 1;
    pointer[2] = 2;
    pointer[3] = 3;
    pointer[4] = 4;

    for (int i = 0; i < 10; i++) {
        printf("%d\n", pointer[i]);
    }

    free(pointer);

    return 0;
}