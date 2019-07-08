#include<stdio.h>
main()
{
	float cel=0, farh=0;
	printf("enter the temperature in celsius: ");
	scanf("%f", &cel);
    farh=(cel*9/5)+32;
	printf("temperature %f celsius is equal to %.2f fahrenheit", cel, farh);
}
