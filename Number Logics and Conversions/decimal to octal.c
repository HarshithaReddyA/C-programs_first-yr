//to convert decimal to its octal equivalent
#include<stdio.h>
main()
{
	long n,d,r,b=1,octal=0;
	printf("Enter a decimal number \n");
	scanf("%d",&n);
	d=n;
	while(n!=0)
	{
		r=n%8;
		octal=octal+r*b;
		n/=8;
		b=b*10;
		
	}
	printf("Its octal equivalent is %d \n",octal);
}

