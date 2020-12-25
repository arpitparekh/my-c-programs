#include<stdio.h>

int main()
{
	int choice;
	float pi,r,a1,h1,w,a2,h2,b,a3;
	printf("1.Area of Circle");
	printf("\n2.Area of Rectangle");
	printf("\n3.Area of Triangle");
	printf("\n\nEnter your choice : ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\nEnter the Radius of the Circle : ");
		scanf("%f",&r);
		pi=3.14;
		a1=pi*r*r;
		printf("\nArea of the Circle is : %f",a1);
		
	}
	else if(choice==2)
	{
		printf("\nEnter the Height of the Rectangle : ");
		scanf("%f",&h1);
		printf("\nEnter the Width of the Rectabgle : ");
		scanf("%f",&w);
		a2=h1*w;
		printf("\nArea of the Rectabgle is : %f",a2);
		
	}else if(choice==3);
	{
		printf("\nEnter the Height of the Trinagle : ");
		scanf("%f",&h2);
		printf("\nEnter the Base of the Triangle : ");
		scanf("%f",&b);
		a3=0.5*h2*b;
		printf("\nArea of the Rectabgle is : %f",a3);
	}
}
