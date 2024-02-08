/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//WAP to print all the natural numbers from 1 to n without 5 multiples
#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   for(int i=0;i<=n;i++)
   {
       if(i%5==0)
       continue;
       printf("%d ",i);
   }

    return 0;
}

