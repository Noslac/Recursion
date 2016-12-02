//solution3: Decimal computing
#include <stdio.h>
#include "functions.h"
int main(void)
{
	float centi,inches;
	int feet;
	printf("Enter the number of centimeters for conversion: ");
    get_float(&centi);
    inches = centi/2.54;
    feet = (int) inches/12;
    inches = inches-feet*12;
    printf("%.1f centimeters is %d feet, %.1f inches\n",centi,feet,inches);
    return 0;
}