#include<stdio.h>
main()
{
 int a,b,c;
 printf("\n enter three values :");
 scanf("%d%d%d",&a,&b,&c);
 if(a==b && b==c)
 printf("\n all are equal");
 else if(a>b && a>c)
 printf("\n a is big");
 else if(b>c)
 printf("\n b is big");
 else
 printf("\n c is big");
}