//To find the sum of the digits of a number and check if the number is palindrome or not
#include<stdio.h>
main()
{
	int n,x,d,s=0,rev=0;
	printf("Enter a number \n");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		d=n%10;
		s+=d;
		rev=(rev*10)+d;
		n/=10;
	}
	printf("Sum of the digits is %d \n",s);
	printf("Reverse of the number is %d \n",rev);
	if(x==rev)
	printf("%d is a palindrome number ",x);
	else
	printf("%d is not a palindrome number ",x);
}
