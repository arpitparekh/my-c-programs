#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
	float p,r,R,t,total;
	printf("Simple interest program");
	printf("\nEnter the Principle ammount :");
	scanf("%f",&p);
	printf("Enter the rate if interest (in percentage) per year:");
	scanf("%f",&R);
	printf("Enter the time period in Year:");
	scanf("%f",&t);
	r=R/100;
	total=p*(1+r*t);
	printf("Total accured ammount is %f",total);
}
