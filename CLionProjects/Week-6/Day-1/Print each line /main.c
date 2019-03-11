#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main()
{

    FILE *fpointer;

    fpointer = fopen("my-file.txt", "w");

    fprintf(fpointer, "Just some bullshit\n Make a new line\n");

    fclose(fpointer);

    fpointer = fopen("my-file.txt", "r");

    char singleLine[150];

    while (!feof(fpointer)) {

        if (NULL == fgets(singleLine, 150, fpointer)) break;

        printf("%s", singleLine);
    }

    fclose(fpointer);

    return 0;
}