//compare.c: Comparing the largest and smallest from 10 inputted numbers.
#include <stdio.h>
#include "functions.h"
int main(void)
{
	float num;int i;
	printf("Enter number 1: ");
	get_float(&num);
	float max = num;
	float min = num;
	for(i=2; i<=10; i++)
	{
		printf("Enter number %d: ", i);
		get_float(&num);
		max=max_of_10(max,num);
		min=min_of_10(min,num);
	}
	printf("The largest of the numbers is: %f and the minimum is: %f\n", max,min);
	return 0;
}