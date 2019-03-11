#include <memory.h>
#include "poker.h"

char is_same_color(char hand[11])
{

    for (int i = 1; i < 10; i += 2) {
        if (hand[1] != hand[i])
        {

            return 0;

        }

    }
    return 1;
}

