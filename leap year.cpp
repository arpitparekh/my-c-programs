#include<stdio.h>
#include<conio.h>

int main ()
{
	int y;
	printf("Enter the Year : ");
	scanf("%d",&y);
	
	if(y%4==0)
	{
		printf("\nGiven year is a leap year");
	}
	else{
		printf("\nGiven year is not a leap year  ");
	}
}
