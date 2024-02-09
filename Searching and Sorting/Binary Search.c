#include <stdio.h>
int BinSearch(int arr[20],int max,int ele)
{
    int l,h=max-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(ele>arr[mid])
        {
            l=mid+1;
        }
        else if(ele<arr[mid])
        {
            h=mid-1;
        }
        else
        return mid;
    }
    return -1;
}
void main()
{
    int i,j,ele,t,n,arr[50],pos;
    printf("\n Enter the valune of n");
    scanf("%d",&n);
    printf("\nEnter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    
}

