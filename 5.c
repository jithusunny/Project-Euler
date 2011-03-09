/*Filename: 5.c
Author: Jithu Sunny
Date: 10-03-11
Description: Project Euler problem 5: What is the smallest number divisible by each of the numbers 1 to 20?*/

#include <stdio.h>

/*Returns 1 if the number is divisible by the numbers 1 through 20. Returns 0 otherwise*/
int isdiv1to20(int num)
{
	int i;
	
	for(i = 2; i < 21; i++)
		if(num % i)
			return 0;
	return 1;
}

int main()
{
	int i;
	
	for(i = 20; ; i++)
		if(isdiv1to20(i))
			{
				printf("Smallest number divisible by 1 through 20 is %d\n", i);
				exit(0);
			}
	return 1;
}
