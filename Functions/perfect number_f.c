
#include <stdio.h>
int perfect(int n)
{
    if(n<1)
    {
        return 0;
    }
    int s=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    return (s==n);
}
int main()
{
    int n,r;
    scanf("%d",&n);   
    if(perfect(n))
    printf("Perfect Number");
    else
    printf("Not a perfect number");
    return 0;
}

