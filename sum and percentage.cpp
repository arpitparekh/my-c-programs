#include<stdio.h>
#include<conio.h>

int main()
{
	int choice;
	int s1,s2,s3,s4,s5,total;
	float p;
	
	printf("\nEnter the marks of all the Subject");
	printf("\n\n\nEnter the mark of 1st Subject :");
	scanf("%d",&s1),
	printf("Enter the mark of 2nd Subject :");
	scanf("%d",&s2),
	printf("Enter the mark of 3rd Subject :");
	scanf("%d",&s3),
	printf("Enter the mark of 4th Subject :");
	scanf("%d",&s4),
	printf("Enter the mark of 5th Subject :");
	scanf("%d",&s5),
	total=s1+s2+s3+s4+s5;
	p=(float)total/500*100;
	printf("\n\nTotal sum of all the sujects is: %d ",total);
	printf("\nPercentage of the all the subject is %f% ",p);
	}
	
	


