#include<stdio.h>
int main()
{
    int n=4;

    for(int i=n;i>=1;i--)
    {
        for(int j=i;j<n;j++)
        {
        printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++)
        {
        printf("*");
        }

    printf("\n");
}
return 0;
}

