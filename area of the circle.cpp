#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
	float r,a;
	float pi = 3.14;
	printf("Enter the radius of the circle :", r);
	scanf("%f", &r);
	a = pi*r*r;
	printf("Area of the circle is : %f", a);
}
