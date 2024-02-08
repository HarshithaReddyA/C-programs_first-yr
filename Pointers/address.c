#include <stdio.h>

int main() 
{
    int size;

    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

     printf("\nAddresses of elements in the array:\n");
     for (int i = 0; i < size; i++) 
    {
        printf("Address of element at index %d: %p\n", i, (void*)&array[i]);
    }

    return 0;
}


