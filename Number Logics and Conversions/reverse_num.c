//To reverse a number
#include <stdio.h>

int main()
{
    int n,d,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        rev=(rev*10)+d;
        n/=10;
    }
    printf("reverse is %d",rev);
    return 0;
}

