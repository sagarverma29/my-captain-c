#include<stdio.h>
main()
{
	int n=0, i=0, fact=1;
	printf("enter the number for which factorial is to be calculated:");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("the factorial of number %d is %d", n, fact);
}
