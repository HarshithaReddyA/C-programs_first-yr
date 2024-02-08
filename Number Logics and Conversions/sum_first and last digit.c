#include <stdio.h>
int main()
{
    int n, sum=0,lastd;
    scanf("%d", &n);
    lastd=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    sum=n+lastd;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}
