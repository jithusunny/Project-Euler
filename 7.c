/*Filename: 7.c
Author: Jithu Sunny
Date: 10-03-11
Description: Project Euler problem 7, Find the 10001st prime.*/

#include <stdio.h>

int isprime(int num)
{
	int i;
	
	for(i = 2; i < num/2; i++)
		if(!(num % i))
			return 0;
	return 1;
}	
		
int main()
{
	int i, count = 0;	
	
	for(i = 2; count <= 10001 ; i++)
		if(isprime(i))
			++count;
	printf("The 10001st prime number is %d\n", i - 1);

	return 1;
}
