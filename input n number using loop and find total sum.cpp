#include<stdio.h>
int main()
{
	//input n numbers using loop and find total sum
	int i,n,t,sum;
	sum=0;
	printf("How many number do u want to add? : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter number %d : ",i);
		scanf("%d",&t);
		sum = sum+t;
	}
	printf("\nTotal sum of given number is %d \n",sum);
	return 0;
}
