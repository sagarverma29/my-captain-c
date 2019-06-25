#include<stdio.h>
main()
{
	int a=0,b=0,c=0;
	int sum=0, avg=0;
	printf("marks secured in the first subject:");
	scanf("%d", &a);
	printf("marks secured in the second subject:");
	scanf("%d", &b);
	printf("marks secured in the third subject:");
	scanf("%d", &c);
	printf("___________*RESULT*_____________\n");
	sum=a+b+c;
	printf("total marks secured in all subjects: %d\n", sum);
	avg=sum/3;
	printf("the average of marks secured: %d\n", avg);
	
}
