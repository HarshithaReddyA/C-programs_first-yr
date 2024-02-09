#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return 1;
}
int main()
{
    int n1,n2;
    printf("Enter the range ");
    scanf("%d %d",&n1,&n2);
    for(int i=n1;i<=n2;i++)
    {
        if(prime(i)==1)
        {
            printf("%d ",i);
        }
    }
}
