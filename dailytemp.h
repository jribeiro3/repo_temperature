
//José Ribeiro, 72473

//Note: using Whitesmiths indetation

/*
 * GONÇALO - dtInit(vect): Initializes a vector to store temperatures during a day (integer value, once per hour, 24
elements, range -50 ... 50)
GONÇALO - dtAdd(vect): Adds a temperature sample
JOSÉ - dtStat(vect, max, min, avg): Returns the maximum, minimum and average temperature among the
samples stored in vect. Note that avg is rounded to an integer.
*/

extern int stats[4];//vector
//stats = {max, min, avg, size};//vector
//avg is rounded to an integer

//functions
int* dtInit();//initializes the integer array of temperatures
void dtAdd(int* vector);//adds an integer temperature to the array
int* dtStat(int* vector);//returns the min, max, avg and size of the integer temperature array

extern int temp_size;
