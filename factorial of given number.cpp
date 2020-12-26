#include<stdio.h>

int main ()
{
	int t,i;
	unsigned long long f = 1;
	printf("Enter the number to find its factorial : ");
	scanf("%d",&t);
	
	if(t>0)
	{
		for(i=1;i<=t;i++)
		{
			f=f*i;
		}
		printf("Factorial of given number is %llu \n",f);
	}
	else if(t<0)
		{
		printf("Factorial of negative number does not exist\n");
	}
	else{
		
		printf("Factorial of zero is 1\n");
	}
	
}