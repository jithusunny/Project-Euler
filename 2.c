/*Filename: 2.c
Author: Jithu Sunny
Date: 09-03-11
Description: Project Euler problem 2: By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.*/

#include <stdio.h>

int main()
{
	int prev, cur, next, sum = 0;
	
	for(prev = 0, cur = 1; cur < 4000000; next = prev + cur, prev = cur, cur = next)
		if(!(cur % 2))
			sum += cur;

	printf("The sum is: %d\n", sum);		
	return 1; 
}
