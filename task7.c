#include <stdio.h>
#include <string.h>
 
main()
{
    char str[20], temp, original[20];
    int i,j;
    printf("enter any string:");
    scanf("%s", &str);
    strcpy(original, str);
    i=0;
    j=strlen(str)-1;
    while(i<j)
    {
    	temp=str[i];
    	str[i]=str[j];
    	str[j]=temp;
    	i++;
    	j--;
	}
	printf("reverse string is %s\n", str);
	if(strcmp(original, str)==0)
	{
		printf("%s is a palindrome", original);
	}
	else
	{
		printf("%s is not a palindrome", original);
	}
}
