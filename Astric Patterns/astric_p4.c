//To print a * pattern
#include <stdio.h>

int main()
{
    int i;int n=4;
   for(i=1;i<=n;i++)
   {
       for(int j=1;j<=n-i+1;j++)
       {
           printf("* ");
       }
       printf("\n");
   }
    return 0;
}


