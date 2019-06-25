#include<stdio.h>
main()
{
	int age=0, number=0;
	char name[15];
	printf("\nenter your name:");
	scanf("%s", &name);
	printf("\nenter your age:");
	scanf("%d", &age);
	printf("\nenter your phone number:");
	scanf("%d", &number);
	printf("______________YOUR DETAILS ARE__________________\n");
	printf("name: %s\nage: %d\nphone number: %d", name,age,number);
}
