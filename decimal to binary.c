//to convert decimal to its binary equivalent
#include<stdio.h>
main()
{
	long n,d,r,b=1,binary=0;
	printf("Enter a decimal number \n");
	scanf("%d",&n);
	d=n;
	while(n!=0)
	{
		r=n%2;
		binary=binary+r*b;
		n/=2;
		b=b*10;
		
	}
	printf("Its binary equivalent is %d \n",binary);
}
