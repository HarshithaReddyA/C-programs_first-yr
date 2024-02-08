//To print a * pattern
#include <stdio.h>

int main()
{
    int i;int n=4;
   for(i=1;i<=n;i++)
   {
       for(int j=1;j<=n-i;j++)
       {
           printf(" ");
       }
       for(int k=1;k<=i;k++)
       {
           printf("*");
       }
       printf("\n");
   }
    for(int i=1;i<=n;i++)
   {
     for(int s=1;s<=i;s++)
     {
       printf(" ");
     }
       for(int j=1;j<=n-i;j++)
       {
           printf("*");
       }
       printf("\n");
   }
    return 0;
}




