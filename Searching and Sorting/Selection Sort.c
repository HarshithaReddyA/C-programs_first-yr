//Selection Sort
#include <stdio.h>
int main()
{
    int i,j,n,temp;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("\n Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("\n The Elements in ascending order:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    
        return 0;
}

