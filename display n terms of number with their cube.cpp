#include<stdio.h>

int main()
{
	int i,h,cube;
	printf("Enter the term : ");
	scanf("%d",&h);
	for(i=1;i<=h;i++)
	{
		cube=i*i*i;
		printf("Cube of %d = %d\n",i,cube);
		
	}
	
}
