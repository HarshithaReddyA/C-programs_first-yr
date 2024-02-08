//To print a number pattern
#include <stdio.h>
int main()
{
    int n=4;
    
    for(int i=n;i>=1;i--)
    {
      for(int j=1;j<=n-i;j++)
       {
           printf(" ");
       }
        for(int j=n;j>=n-i+1;j--)
        {
            printf("%d",j);
        }
        for(int j=n-i+2;j<=n;j++)
        {
          printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}


