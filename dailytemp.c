
//José Ribeiro, 72473

//Note: using Whitesmiths indetation

#include <stdio.h>//to use printf, scanf, stderr, sizeof
#include <stdlib.h>//to use malloc, srand, rand
#include <stddef.h>//to use sizeof
#include <time.h>//to use time
#include <math.h>//to use round()

#include "dailytemp.h"

//global variables
int temp_size = 0;

//----------------------------------------------------------
int* dtInit()
	{
	int size = 24;
	int* array = (int*)malloc(size * sizeof(int));

	if(array == NULL)
		{
		fprintf(stderr, "Error. Function dtInit(): malloc failed!!!\n");
		return(NULL);
		}

	for(int idx = 0; idx < size ; idx++)
		{
		srand(time(NULL));//use current time as seed for random generator
		//double p = (double)rand();//[0; RAND_MAX]
		double p = (double)rand() / RAND_MAX;//[0; 1]
		p = (p * 100) - 50;
		*(array + idx) = round(p);
		}

	temp_size = 24;

	return(array);
	}
//----------------------------------------------------------

//----------------------------------------------------------
int* dtStat(int* vector)
	{
	int max, min, sum, avg, count= 0;
	int size = temp_size;

	for(int idx = 0; idx < size; idx++)
		{
		if(*(vector + idx) > max) max = *(vector + idx);
		if(*(vector + idx) < min) min = *(vector + idx);
		sum += *(vector + idx);
		count++;
		}

	if(count != temp_size) return(NULL);//error

	avg = sum / count;//avg is rounded to an integer

	//stored values
	int stats[4];
	stats[0] = max;//max
	stats[1] = min;//min
	stats[2] = avg;//avg
	stats[3] = count;//size

	int* p = stats;
	return(p);
	}
//----------------------------------------------------------

//----------------------------------------------------------
void dtAdd(int* vector)
	{
	}
//----------------------------------------------------------
