#include <stdio.h>
int main()
{
    int n,key; 
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n],c=0;
    printf("\nEnter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be searched");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        c=i;
    }
    if(c==0)
    printf("\nElement not found");
    else
    printf("\nElement found at %d",c);
}

