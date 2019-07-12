#include<stdio.h>s
main()
{
	int temp=0, choice=0, degree=0;
	int cel=0, farh=0;
	int cel1=0, farh1=0;
	printf("1.celsius to fahrenheit \n2.fahrenheit to celsius\n");
	scanf("%d", &temp);
	switch (temp)
	{
		case 1:
			printf("\nenter the temperature in celsius:");
			scanf("%d", &cel);
			farh=(cel*9/5)+32;
			printf("%d celsius is %d in fahrenheit\n", cel, farh);
			break;
		case 2:
			printf("\nenter the temperature in fahrenheit:");
			scanf("%d", &farh);
			cel=(farh-32)*5/9;
			printf("%d fahrenheit is %d in celsius\n", farh, cel);
			break;
			
	}
	printf("****************************************************************************\n");
	printf("do you want to choose again");
	printf("\n1.YES \n2.NO");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			{
				printf("\n1.celsius to fahrenheit \n2.fahrenheit to celsius\n");
	            scanf("%d", &degree);
        	switch (degree)
	        {
		        case 1:
			        printf("\nenter the temperature in celsius:");
			        scanf("%d", &cel1);
			        farh1=(cel1*9/5)+32;
			        printf("%d celsius is %d in fahrenheit\n", cel1, farh1);
			        break;
		        case 2:
			        printf("\nenter the temperature in fahrenheit:");
			        scanf("%d", &farh1);
			        cel1=(farh1-32)*5/9;
			        printf("%d fahrenheit is %d in celsius\n", farh1, cel1);
			        break;
			
	        }
	        break;
			}
	    case 2:
	    	{
	    		printf("EXIT");
	    		break;
			}
	}
}
