#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()

{
	int b,h;
	float a;
	printf("Enter the Height of the triangle :", h);
	scanf("%d", &h);
	printf("Enter the Base of the triangle :", b);
	scanf("%d", &b);
	a = 0.5*b*h;
	printf("Area of the triangle is : %f", a);
}
