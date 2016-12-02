//tutorial 2.c: Using pointer
#include <stdio.h>
#include "functions.h"
int main(void)
{
	float num1,num2;
	printf("Enter a real number: ");
	get_float(&num1);
	printf("Enter another real number: ");
    get_float(&num2); 
    printf("The square of %.3f is: %.1f and the square of %.3f is: %.1f\n", num1,square(num1),num2,square(num2));
    sum_average(&num1,&num2);
    printf("The sum of the two numbers is: %.1f and their average is: %.1f\n", num1,num2);
    return 0;
}
