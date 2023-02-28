
//José Ribeiro, 72473

//Note: using Whitesmiths indetation

#include <stdio.h>//to use printf, scanf, stderr, sizeof
#include <stdlib.h>//to use malloc, srand, rand
#include <stddef.h>//to use sizeof
#include <time.h>//to use time
#include <math.h>//to use round()

#include "dailytemp.h"

int main(void)
	{
	int valueCount = 0;
	int quit = '0';
	char str[100];

	while(quit != 'q')
		{
		int* vector = dtInit();

		//number of temperatures to add
		printf("How many values do you want to add? ->");
		while(valueCount <= 0)
			{
			printf("Error!!! Must be a value greater than 0!!!\n");
			scanf("%s %d", str, &valueCount);
			}

		//temperatures to add
		printf("Adding %d values\n", valueCount);
		for(int idx = 0; idx < valueCount; idx++)
			{
			dtAdd(vector);
			}

		//status of the temperature vector
		int* stats = dtStat(vector);
		printf("Max. temp.: %dº\nMin. temp.: %dº\nAvg. temp.: %d\n\n", *(vector + 0), *(vector + 1), *(vector + 2));

		//user option
		scanf("%s %d", str, &quit);
		}
	return(0);
	}
