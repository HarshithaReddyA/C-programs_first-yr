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
    int n1,n2,r;
    scanf("%d%d",&n1,&n2); 
    for(int i=n1;i<=n2;i++)
    {
        if(perfect(i))
        {
            printf("%d ",i);
        }
    }
}
