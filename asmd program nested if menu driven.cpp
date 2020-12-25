#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()

{
	float a,b,c,choice;
	printf("1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Divition");
	printf("\nEnter your choice :");
	scanf("%f", &choice);
	
	if(choice==1)
	{
		printf("enter the first value :", a);
		scanf("%f", &a);
		printf("enter the second value :", b);
		scanf("%f", &b);
		c = a+b;
		printf("Addition of the two number is %f", c);
		
	}
	else if(choice==2)
	{
		printf("enter the first value :", a);
		scanf("%f", &a);
		printf("enter the second value :", b);
		scanf("%f", &b);
		c = a-b;
		printf("Subtraction of the two number is %f", c);
		
	}
	else if(choice==3)
	{
		printf("enter the first value :", a);
		scanf("%f", &a);
		printf("enter the second value :", b);
		scanf("%f", &b);
		c = a*b;
		printf("Multiplication of the two number is %f", c);
		
	}
	else if(choice==4)
	{
		printf("enter the first value :", a);
		scanf("%f", &a);
		printf("enter the second value :", b);
		scanf("%f", &b);
		c = a/b;
		printf("Divition of the two number is %f", c);
		
	}
	
}
