#include<stdio.h>
main()
{
	char fname[20];
	char lname[20];
	char name[42];
	int i=0, j=0;
	printf("enter your first name:");
	gets(fname);
	printf("enter your last name:");
	gets(lname);
    while(fname[i]!='\0')
    {
    	name[i]=fname[i];
    	i++;
	}
	while(lname[j]!='\0')
	{
		name[i]=lname[j];
		i++;
		j++;
	}
	name[i]='\0';
	printf("********************************************************\n");
	printf("YOUR FULL NAME IS: %s", name);
}



