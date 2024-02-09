#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,n;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    printf("\nArray:- ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    free(arr);//Memory deallocation takes place
    printf("\nArray :-"); 
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}
    
