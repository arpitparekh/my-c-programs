#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()

{
	float a,b,choice;
	printf("1.Square");
	printf("\n2.cube");
	printf("\nEnter the choice :");
	scanf("%f", &choice);
	
	if(choice==1)
	{
		printf("Enter the value :",a);
		scanf("%f", &a);
		b=a*a;
		printf("Square of the given value is : %f", b);
	}
	if(choice==2)
	{
		printf("Enter the value :",a);
		scanf("%f", &a);
		b=a*a*a;
		printf("Cube of the given value is : %f", b);
	}
}
