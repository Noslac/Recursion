//solution4.c: relative and equality comparism of two numbers(integers)
#include <stdio.h>
#include <iso646.h>
int main(void)
{
	int n1,n2,test1;
	printf("Enter two first integer: ");
	test1 = scanf("%d", &n1);
	printf("Enter the second integer: ");
	int test2 = scanf("%d", &n2);
	if(test1!=1 and test2!=1)
		printf("\nError!!!\n");
	else if(n1<n2)
		printf("\nUP!!!\n");
	else if(n1==n2)
		printf("\nEqual!!!\n");
	else 
		printf("\nDown!!!\n");
	return 0;
	
}
