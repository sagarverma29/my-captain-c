#include<stdio.h>
main()
{
	int n=0;
	int digits=0;
	int sum=0, temp=0, r=0;
	printf("enter the number of your choice:");
	scanf("%d", &n);
	temp=n;
	//calculating the number of digits 
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
		digits++;
	}
	printf("total number of digits in the entered number are: %d\n", digits);
	
	if(sum==temp)
	{
		printf("the given number is a armstrong number");
	}
	else
	{
		printf("the given number is not a armstrong number");
	}
}
