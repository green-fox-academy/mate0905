#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenate(char string1[], char string2[])
{

    char *new_word = (char *) malloc(strlen(string1) + strlen(string2) * sizeof(char));

    int counter = 0;
    for (int i = 0; i < strlen(string1); i++) {
        new_word[counter] = string1[i];
        counter++;
    }

    for (int i = 0; i < strlen(string2); i++) {
        new_word[counter] = string2[i];
        counter++;
    }

    return new_word;
}

int main()
{

    char word1[] = "Guns&";
    char word2[] = "Roses";

    char *result = concatenate(word1, word2);

    printf("%s", result);

    free(result);
    return 0;
}

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.
