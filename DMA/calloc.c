#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,n;
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}
