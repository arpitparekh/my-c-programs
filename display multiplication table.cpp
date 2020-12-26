#include<stdio.h>

int main ()
{
	int i,n,m;
	printf("Enter the number to display the multiplication table ");
	scanf("%d",&n);
	
	for(i=0;i<=10;i++)
	{
		m=n*i;
		printf("%d * %d = %d\n",n,i,m);
	}
}
