#include<stdio.h>

int main()
{
	//dispaly n terms of natural number and their sum
	int n,i;
	int sum=0;
	printf("Enter the term : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
		
	}
	printf("\nTotal sum = %d",sum);
}
