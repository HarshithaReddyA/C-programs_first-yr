//finding max using ternary operator
#include<stdio.h>
main()
{
	int x,y,max;
	printf("Enter two numbers");
	scanf("%d%d",&x,&y);
	max=(x>y)?x:y;
	printf("Max is %d",max);
}
