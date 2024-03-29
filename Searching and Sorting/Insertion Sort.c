// INSERTION SORT


#include <stdio.h>
void InsertionSort(int n, int arr[n])
{  
    int key;
    for(int i=0;i<n;i++)
    {
        key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void Display(int n, int arr[n])
{
    
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Before Sorting :- ");
    Display(n,arr);  
    
    InsertionSort(n,arr);
    
    printf("\nAfter Sorting :- ");
    Display(n,arr);
    return 0;
}
