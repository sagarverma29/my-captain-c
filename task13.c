#include<stdio.h>
main()
{
	int arr[5];
	int i=0, j=0, n=0;
	int large=0, small=0;
	printf("enter the number of elements in the array:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("the %d element is:",i);
		scanf("%d", &arr[i]);
	}
	large=arr[0];
	for(i=1;i<n;i++)
	{
		if(large<arr[i])
		large=arr[i];
	}
	printf("\n%d is the largest element\n", large);
	small=arr[0];
	for(i=1;i<n;i++)
	{
		if(small>arr[i])
		small=arr[i];
	}
	printf("%d is the smallest element", small);
}
