#include<stdio.h>
main()
{
	int n=0, rev=0;
	printf("enter a number of your choice:");
	scanf("%d", &n);
	while(n!=0)
	{
		rev=rev*10;
		rev=rev+(n%10);
		n=n/10;
	}
	printf("the reverse is %d", rev);
	
}


