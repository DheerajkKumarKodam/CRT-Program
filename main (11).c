#include<stdio.h>
main()
{
    int n,r,sum=0;
    printf("enter ur vehicle no.");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("\n lucky no. %d",sum);
    }                                                             /* goto -- Lucky no.*/
    