#include<stdio.h>
main()
{
    int a,b;
    for(a=1;a<=10;a++)
    {
        for(b=1;b<=20;b++)                                      /* Tables */
        {
            printf("\n %d x %d =%d",a,b,a*b);
        }
        printf("\n\n");
    }
}