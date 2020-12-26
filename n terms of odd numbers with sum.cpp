#include<stdio.h>

int main()
{
	int i,t;
	int sum=0;
	printf("Enter the term : ");
	scanf("%d",&t);
	printf("All odd numbers upto %d is \n",t);
	
	for (i=1; i<=t ;i++)
	{
		if(i%2 != 0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
		
		
	}
	printf("Total sum of given odd number is %d",sum);
}
