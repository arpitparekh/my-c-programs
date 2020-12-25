#include<stdio.h>
#include<conio.h>

int main ()
{
	int a,b,c;
	printf("Enter the first number = ");
	scanf("%d",&a);
	printf("\nEnter the second number = ");
	scanf("%d",&b);
	printf("\nEnter the third number = ");
	scanf("%d",&c);
	
	if(a>=b && a>=c)
	{
		printf("\n\n%d is greater",a);
	}
	else if(b>=a && b>=c)
	{
		printf("\n\ny%dis greater",b);
	}
	else if(c>=a && c>=b)
	{
		printf("\n\n%d is greater",c);
	}
	
}
