#include<stdio.h>
main()
{
	int b=0, i=0, a=0, product=0;
	printf("enter the number for the table rquired:");
	scanf("%d", &b);
	printf("range of table:");
	scanf("%d", &a);
	printf("the required table is:\n");
	for(i=1;i<=a;i++)
	{
		product=b*i;
		printf("%d*%d=%d\n", b,i,product);
	}
}
