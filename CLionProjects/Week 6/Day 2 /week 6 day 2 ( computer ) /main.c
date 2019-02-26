#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer
{
  float cpu_speed_GHz;
  int ram_size_GB;
  int bits;
};

typedef struct
{
  float cpu_speed_GHz;
  int ram_size_GB;
  int bits;
} Notebook;

int main()
{

    struct Computer computer1;

    computer1.cpu_speed_GHz = 5;
    computer1.ram_size_GB = 16;
    computer1.bits = 64;

    Notebook macbookpro;

    macbookpro.cpu_speed_GHz = 10;
    macbookpro.ram_size_GB = 16;
    macbookpro.bits = 64;


    printf("Computer %g ,%d ,%d \n", computer1.cpu_speed_GHz, computer1.ram_size_GB, computer1.bits);
    printf("macbookpro %g ,%d ,%d \n", macbookpro.cpu_speed_GHz, macbookpro.ram_size_GB, macbookpro.bits);

    return 0;
}