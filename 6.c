/*Filename: 6.c
Author: Jithu Sunny
Date: 10-03-11
Description: Project Euler problem 6, Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

#include <stdio.h>

#define NUMBER 100

int sqr(int n)
{	
	return n * n;
}

int sumofsquares(int num)
{
	return num * (num + 1) * (2 * num + 1) / 6;
}

int squareofsum(int num)
{
	return sqr(num * (num + 1) / 2);
}

int main()
{
	long int sum1, sum2;

	printf("The difference of sum of squares & square of sum of first %d natural numbers is: %d\n", NUMBER, squareofsum(NUMBER) - sumofsquares(NUMBER));

	return 1;
}	
