/*Filename: 3.c
Author: Jithu Sunny
Date: 10-03-11
Description: Project Euler problem 3: What is the largest prime factor of the number 600851475143 ?*/

#include <stdio.h>

int isprime(int num)
{
	int i;
	
	for(i = 2; i <= num / 2; i++)
		if(!(num % i))		
			return 0;
	return 1;
}

int main()
{
	int i, factor = 0;
	long long unsigned int num = 600851475143LL; 
	
	for(i = 2; i <= num / 2; i++)
		if(!(num % i) && (isprime(i)))
			if(i > factor)
				factor = i;
	
	printf("The largest prime factor is %d\n", factor);
	
	return 1;
}
