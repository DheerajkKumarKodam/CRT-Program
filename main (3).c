#include<stdio.h>
main()
{
int i,n;
printf("\n enter");                            /* factors */
scanf("%d",&n);
printf("factors",n);
for(i=1;i<n;i++)
{
    if(n%i==0)
    printf("\n %d",i);
}
}