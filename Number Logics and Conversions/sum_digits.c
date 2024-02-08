//Sum of digits of the given number
#include <stdio.h>

int main()
{
    int i,n,s=0,d;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        d=n%10;
        s+=d;
        n/=10;
    }
    printf("Sum of digits= %d",s);
    return 0;
}


