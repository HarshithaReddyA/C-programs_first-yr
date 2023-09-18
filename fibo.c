//to print the fibonacci series till n terms
#include<stdio.h>
main()
{
	int a=0,b=1,s=0,i,n;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(i=2;i<n;i++)
	{
		s=a+b;
		printf("%d ",s);
		a=b;
		b=s;
	}
}
