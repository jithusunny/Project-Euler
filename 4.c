/*Filename: 4.c
Author: Jithu Sunny
Date: 10-03-11
Description: Project Euler problem 4, Find the largest palindrome made from the product of two 3-digit numbers.*/

#include <stdio.h>
#include <stdlib.h>

/*Returns the reverse of the number*/
int rev(int num)
{
	int i, temp = 0;
	
	for(i = 0; i < 3; i++)
	{
		temp *= 10;
		temp += num % 10;
		num /= 10;
	}
	
	return temp;
}
			
int main()
{
	int i, j;
	int num;
	
	for(i = 998; i >= 100; i--)
	{
		num = i * 1000 + rev(i);  //Palindrome generator
		
		for(j = 999; j >= 100; j--)
			if(!(num % j) && num/j <= 999)	
			{
				printf("%d %d\n", num, j);
				exit(0);
			}
	}
	
	return 1;
}


