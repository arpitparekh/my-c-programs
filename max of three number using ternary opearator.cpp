#include<stdio.h>
#include<conio.h>

int main ()
{
	int a,b,c;
	printf("Enter the 1st number : ");
	scanf("%d",&a);
	printf("\nEnter the second number : ");
	scanf("%d",&b);
	printf("\nEnter the third number : ");
	scanf("%d",&c);
	
	a>=c && a>=b ? printf("\n%d is greatest",a) : printf("\n%d is not the greatest",a);
	b>=c && b>=a ? printf("\n%d is greatest",b) : printf("\n%d is not the greatest",b);
	c>=a && c>=b ? printf("\n%d is greatest",c) : printf("\n%d is not the greatest",c);
	
}
