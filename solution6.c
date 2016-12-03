//solutin6.c: Learning more on data types
#include <stdio.h>
#include "functions.h"
int main(void)
{
	int num;float num2;
	char ch;
	printf("enter a number <integer>: ");
	get_int(&num);
	printf("You the decimal %d \n", num);
	printf("enter a floating number: ");
	get_float(&num2);
	printf("You entered %f \n",num2 );
	printf("As an iteger %f will be %d \n",num2, (int) num2);
    printf("Enter a character: ");
    getchar();//used to dispose off the character in the input queue from line 14 when the part after the 
    //decimal point is neglected.
    ch = getchar();
    printf("The ASCII code for %c is: %d", ch,ch);
	return 0;
}