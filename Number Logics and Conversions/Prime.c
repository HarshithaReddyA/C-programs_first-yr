#include<stdio.h>
int main()
{
	int n,i,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
		if(c==2)
		    printf("%d is prime",n);
		else
		    printf("%d is not a prime number",n);
    return 0;
	
}
