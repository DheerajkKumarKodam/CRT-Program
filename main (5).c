#include<stdio.h>
main()
{
int num;
printf("\n Enter a number ");
scanf("%d",&num);
if(num<=9)
printf("\n single digit");
else if(num<=99)
printf("\n double digit");
else if(num<=999)
printf("\n three digit");
else
printf("\n 4 or more digits");
}