#include<stdio.h>
main()
{
    int i;
    for(i=1;i<=20;i++)
    {                                           /*  break demo */
        printf("\n %d",i);
        if (i==11)
        break;
    }
    printf("\n Hello");
}