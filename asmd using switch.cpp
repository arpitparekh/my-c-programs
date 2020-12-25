#include<stdio.h>

int main ()
{
	float a,b,d;
	int choice;
	printf("1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Divition");
	printf("\n\nPlease enter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("\nEnter the first number : ");
		scanf("%f",&a);
		printf("Enter the second number : ");
		scanf("%f",&b);
		d=a+b;
		printf("\nAddition of given two number is : %f",d);
		break;
		
		case 2:
		printf("\nEnter the first number : ");
		scanf("%f",&a);
		printf("Enter the second number : ");
		scanf("%f",&b);
		d=a-b;
		printf("\nSubtraction of given two number is : %f",d);
		break;
		
		case 3:
		printf("\nEnter the first number : ");
		scanf("%f",&a);
		printf("Enter the second number : ");
		scanf("%f",&b);
		d=a*b;
		printf("\nMultiplication of given two number is : %f",d);
		break;
		
		case 4:
		printf("\nEnter the first number : ");
		scanf("%f",&a);
		printf("Enter the second number : ");
		scanf("%f",&b);
		d=a/b;
		printf("\nDivition of given two number is : %f",d);
		break;	
			
	}
}
