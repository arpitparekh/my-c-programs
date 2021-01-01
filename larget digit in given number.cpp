#include<stdio.h>
int main()
{
     long long n,temp=0,max=0 ;

    printf("Enter the number : ");

    scanf("%d",&n);

    while(n>0)
    {
        temp=n%10;
        if(temp>max)
        {
            max=temp;
        }
        n=n/10;
    }
    printf("Largest digit is %lld",max);


}
