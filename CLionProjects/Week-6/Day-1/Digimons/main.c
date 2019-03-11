#include <stdio.h>
#include <memory.h>

enum digivolution_level
{

  BABY,
  IN_TRAINING,
  ROOKIE,
  CHAMPION,
  ULTIMATE,
  MEGA

};

typedef struct
{
  unsigned char name[128];
  unsigned int age;
  unsigned int health : 6;
  char name_of_tamer[256];
  enum digivolution_level level;

} digimon_t;

int get_minimum_health_index(digimon_t *array, int array_length);

int get_same_digivolution_count(digimon_t *array, int array_length, enum digivolution_level lvl);

int get_same_tamer_count(digimon_t *array, int array_length, char *tamer);

double get_average_health(digimon_t *array, int array_length, char *tamer);

int main()
{
    digimon_t Digi_mons[4];

    digimon_t Pikatchu;
    digimon_t Charmander;
    digimon_t Charizard;
    digimon_t Raichu;

    Pikatchu.health = 50;
    Charmander.health = 70;
    Charizard.health = 65;
    Raichu.health = 50;

    Pikatchu.level = CHAMPION;
    Charmander.level = IN_TRAINING;
    Charizard.level = ULTIMATE;
    Raichu.level = MEGA;

    strcpy(Pikatchu.name_of_tamer, "name1");
    strcpy(Charmander.name_of_tamer, "name1");
    strcpy(Charizard.name_of_tamer, "name3");
    strcpy(Raichu.name_of_tamer, "name4");

    Digi_mons[0] = Pikatchu;
    Digi_mons[1] = Charmander;
    Digi_mons[2] = Charizard;
    Digi_mons[3] = Raichu;

    printf("%d, %d, %d, %.2f,", get_minimum_health_index(Digi_mons, 4), get_same_digivolution_count(Digi_mons, 4, MEGA),
           get_same_tamer_count(Digi_mons, 4, "name1"), get_average_health(Digi_mons, 4, "name1"));


    return 0;
}

int get_minimum_health_index(digimon_t *array, int array_length)
{
    int minimumHealth = array[0].health;
    int index = 0;
    for (int i = 0; i < array_length; i++) {
        if (minimumHealth < array[i].health) {
            index = i;
        }

    }
    return index;

}

int get_same_digivolution_count(digimon_t *array, int array_length, enum digivolution_level lvl)
{

    int count = 0;
    for (int i = 0; i < array_length; i++) {
        if (lvl == array[i].level) {
            count++;
        }

    }
    return count;
}

int get_same_tamer_count(digimon_t *array, int array_length, char *tamer)
{

    int count = 0;
    for (int i = 0; i < array_length; i++) {
        if (strcmp(tamer, array[i].name_of_tamer) == 0) {
            count++;
        }

    }
    return count;
}

double get_average_health(digimon_t *array, int array_length, char *tamer)
{

    double average_health = 0;
    int count = 0;
    for (int i = 0; i < array_length; i++) {
        if (strcmp(tamer, array[i].name_of_tamer) == 0) {
            count++;
            average_health += array[i].health;
        }

    }
    return average_health / count;
}


#define MAX health 100

/* Digimon database!
 * You should store the following data in a structure
 *  - the name of the digimon (which is shorter than 128 characters)
 *  - the age of the digimon (in years)
 *  - the health of the digimon (between 0-100)
 *  - the name of the tamer (which is shorter than 256 characters)
 *  - the digivolution level of the digimon (as a custom type, see below)
 *
 * You should store the digivolution level in an enumeration
 * the valid digivolution levels are:
 *  - baby
 *  - in-training
 *  - rookie
 *  - champion
 *  - ultimate
 *  - mega
 *
 * The digimons are stored in an array.
 *
 * Write the following functions:
 * 1) Get minimum health index
 *      - parameters:
 *          - array
 *          - array length
 *      - it returns the index of the minimal health digimon in the "array"
 * 2) Get same digivolution level count
 *      - parameters:
 *          - array
 *          - array length
 *          - digivolution level
 *      - it returns the count of digimons which are at "digivolution level"
 * 3) Get same tamer count
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the count of the digimons which have the same tamer as "tamer name"
 * 4) Get average health of the same tamer
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the average health of the digimons which have the same tamer as "tamer name"
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */
