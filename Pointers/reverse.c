#include <stdio.h>

// Function to print the elements of an array in reverse order
void printReverse(int *arr, int size) 
{
    for (int i=size-1;i>=0;i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &array[i]);
    }

    printf("\nArray in reverse order:\n");
    printReverse(array, size);

    return 0;
}


