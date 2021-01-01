#include<stdio.h>
int main()
{
    int n,mul=1,m;
    printf("Enter the number : ");
    scanf("%d",&n);


    if(n>0)
    {
        while(n>0)
        {
        m=n%10;

        mul=mul*m;

        n=n/10;

        }

        printf("Multiplication of the digits in %d",mul);
    }

    else if(n<0)
    {
            printf("Enter the positive number");
    }

    else{
        printf("Zero multiply bt any number is 0");
    }



}

