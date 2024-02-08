/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void swap(int *a, int *b) 
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i=0;i<size;i++) 
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<size-1;i++) 
    {
        for (int j=0;j<size-i-1;j++) 
        {
            
            if (*(arr+j)>*(arr+j+1)) 
            {
                swap(arr+j,arr+j+1);
            }
        }
    }
    printf("Sorted Array: ");
    for (int i=0;i<size;i++) 
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
}
    


