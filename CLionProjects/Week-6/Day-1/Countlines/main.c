#include <stdio.h>
#include <string.h>

int line_counter(char file_name[])
{
    FILE *my_file;

    my_file = fopen(file_name, "r");

    if (my_file == NULL) {
        printf("Failed to open file\n");
        return 0;
    }

    fseek(my_file, 0, SEEK_END);
    int size = ftell(my_file);
    if (size == 0)
        return 0;

    fseek(my_file, 0, SEEK_SET);

    int counter = 1;
    while (!feof(my_file)) {
        char character = fgetc(my_file);
        if (character == '\n')
            counter++;

    }

    fclose(my_file);

    return counter;
}

int main()
{
    char file[] = "../my-file.txt";
    printf("%i", line_counter(file));
    return 0;
}

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file