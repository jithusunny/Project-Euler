/*Filename: 1.c
Author: Jithu Sunny
Date: 09-03-11
Description: Project Euler problem 1: Add all the natural numbers below one thousand that are multiples of 3 or 5.*/

#include <stdio.h>

int main()
{
	int i, sum = 0;
	
	for(i = 1; i < 1000; i++)
		if(!(i % 3) || !(i % 5))
			sum += i;
	printf("The sum is %d.\n", sum);
	return 1;
}
