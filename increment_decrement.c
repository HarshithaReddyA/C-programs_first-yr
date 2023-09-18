//increment decrement
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the value of x \n");
	scanf("%d",&x);
	y=++x;
	x=y++;
	y=x--;
	y=--x;
	printf("x and y are %d and %d",x,y);
	return 0;
}
