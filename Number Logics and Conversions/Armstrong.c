#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,s=0,d;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        d=n%10;
        s+=(d*d*d);
        n/=10;
    }
    if(s==t)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong");
}
