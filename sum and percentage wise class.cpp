#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int s1,s2,s3,s4,s5,total;
	float p;
	printf("Please enter your marks upto 100");
	printf("\n\nEnter the 1st subject marks : ");
	scanf("%d",&s1);
	printf("Enter the 2nd subject marks : ");
	scanf("%d",&s2);
	printf("Enter the 3rd subject marks : ");
	scanf("%d",&s3);
	printf("Enter the 4th subject marks : ");
	scanf("%d",&s4);
	printf("Enter the 5th subject marks : ");
	scanf("%d",&s5);
	total=s1+s2+s3+s4+s5;
	p=(float)total/500*100;
	printf("\n\nTotal percentage is %f",p);
	
	if(p>=75)
	{
		printf("\n\nStudent got and distinction");
	}
	else if(p<75 && p>=60)
	{
		printf("Student got first class");
	}
	else if(p<60 && p>=50)
	{
		printf("Student got second class");
	}
	else if(p<50 && p>=35)
	{
		printf("Student got third class");
	}
	else
	{
		printf("Student is fail");
	}
}
