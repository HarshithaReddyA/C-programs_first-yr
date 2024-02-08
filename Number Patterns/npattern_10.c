//To print a number pattern
#include <stdio.h>
int main()
{
    int n=4;
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}

