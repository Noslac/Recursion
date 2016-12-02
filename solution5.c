//solution5.c: using the switch() statement
#include <stdio.h>
#include "functions.h"
int main(void)
{
	int month_number;
	printf("Enter an integer <1-12> to know it's corresponding month: ");
	get_int(&month_number);
	switch(month_number)
	{
		case 1: 
		       printf("Month 1 is January\n");
		       break; 
		case 2: 
		       printf("Month 2 is Febraury\n");
		       break;
		case 3: 
		       printf("Month 3 is March\n");
		       break; //without break, printing starts from March right upto December
		case 4: 
		       printf("Month 4 is April\n");
		       break;
		case 5: 
		       printf("Month 5 is May\n");
		       break;
		case 6: 
		       printf("Month 6 is June\n");
		       break;
		case 7: 
		       printf("Month 7 is July\n");
		       break;
		case 8: 
		       printf("Month 8 is August\n");
		       break;
		case 9: 
		       printf("Month 9 is September\n");
		       break;
		case 10: 
		       printf("Month 10 is October\n");
		       break;
		case 11: 
		       printf("Month 11 is November\n");
		       break;
		case 12: 
		       printf("Month 1 is December\n");
		       break;
		default: 
		       printf("Invalid Month number <1:January  10:October>\n");
		       break;
	}
}