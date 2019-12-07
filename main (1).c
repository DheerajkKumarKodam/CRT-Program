#include<stdio.h>
main()
{
	int a,b,ch;
	printf("\n enter numbers");
	scanf("%d%d",&a,&b);
	printf("\n 1. add \n 2. sub \n 3. mul \n 4. div");
	printf("\n enter choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\n add is %d",a+b);break;
		case 2:printf("\n sub is%d ",a-b);break;
		case 3:printf("\n mul is %d",a*b);break;
		case 4:printf("\n div is %d",a/b);break;
		default:printf("\n invalid");
	}
}