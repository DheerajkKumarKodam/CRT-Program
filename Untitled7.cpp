
#include<stdio.h>
main()
{
    int a,b,c;
  
    printf("\n enter two values:");
    scanf("%d%d",&a,&b);
    printf("\n before swap a=%d \t b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n after swap a=%d \t b=%d",a,b);
    
}
