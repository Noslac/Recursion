//solution7.c: number palindromes
#include <stdio.h>
#include "functions.h"
int main(void)
{
   int n,i;
   printf("Enter an integer <1-9>: ");
   get_int(&n);
   while(n<1||n>9)
   	 {
   	 	printf("Invalid enter again: ");
   	 	get_int(&n);
   	 } 
   for(i=1; i<=n; i++)
       printf("%d",i);
   for(i=n-1; i>=1; i--)
       printf("%d",i);
   return 0;
}