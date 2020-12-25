#include<stdio.h>
#include<conio.h>

int main()
{
	float c,f;
	int C;
	printf("1.Celcius to Fahrenheit");
	printf("\n1.Fahrenheit to Celcius");
	printf("\nEnter your chioce:");
	scanf("%d",&C);
	
	switch(C)
	{
	case 1:
		printf("Enter the value in Celcius:");
		scanf("%f",&c);
		f=(c*9/5)+32;
		printf("%f in Fahrenheit is %f",c,f);
		break;
	case 2:
		printf("Enter the value in Fahrenheit:");
		scanf("%f",&f);
		c=(f-32)*0.555;
		printf("%f in Celcius is %f",f,c);
		break;
	}
	
}
