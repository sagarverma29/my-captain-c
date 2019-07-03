#include<stdio.h>
main()
{
	int temp=0;
	printf("1.celsius to fahrenheit \n2.fahrenheit to celsius\n");
	int cel=0, far=0;
	scanf("%d", &temp);
	switch (temp)
	{
		case 1:
			printf("\nenter the temperature in celsius:");
			scanf("%d", &cel);
			far=(cel*9/5)+32;
			printf("%d celsius is %d in fahrenheit", cel, far);
			break;
		case 2:
			printf("\nenter the temperature in fahrenheit:");
			scanf("%d", &far);
			cel=(far-32)*5/9;
			printf("%d fahrenheit is %d in celsius", far, cel);
			break;
			
	}
}
