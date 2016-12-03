//solution8.c
#include <stdio.h>
#include "functions.h"
int main(void)
{
	int m,n,i,j=0;
	printf("Enter a value of m: ");
	get_int(&m);
	printf("Enter a value for n: ");
	get_int(&n);
	m += 1;
	n -= 1;
	for(i=m; i<=n; i++)
	{
		printf("\t%d",m++);
		j++;
	}
	 
	 m=n-j;
	 puts("");
	for(i=m; i<n; i++)
	{
		m++;
		printf("\t%d", m*m);
	}
return 0;

}