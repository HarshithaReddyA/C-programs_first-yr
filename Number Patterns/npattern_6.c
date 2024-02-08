//To print a * pattern
#include <stdio.h>

int main()
{
    int i,j;int n=4;
   for(i=4;i>=1;i--)
   {
       for(j=1;j<=n-i;j++)
       {
           printf(" ");
       }
       for(int k=1;k<=i;k++)
       {
           printf("%d",k);
       }
       printf("\n");
   }
    return 0;
}




