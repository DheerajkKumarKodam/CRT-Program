#include<stdio.h>
main()
{
    int n;
    printf("\n enter no. ");
    scanf(" %d",&n);                                  /* goto */
    if(n%2==0)
    goto even;
    else
    goto odd;
    even:printf(" even");exit(0);
    odd:printf("odd");
}