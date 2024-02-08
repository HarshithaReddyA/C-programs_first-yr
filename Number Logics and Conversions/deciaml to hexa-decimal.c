//to convert decimal to its hexa-decimal equivalent
#include<stdio.h>
main()
{
	long n,d,r,b=1,hd=0;
	printf("Enter a decimal number \n");
	scanf("%d",&n);
	d=n;
	while(n!=0)
	{
		r=n%16;
		hd=hd+r*b;
		n/=16;
		b=b*10;
		
	}
	printf("Its hexa-decimal equivalent is %d \n",hd);
}

