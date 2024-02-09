/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int digits(int n)
{
    int d,c=0;
    while(n!=0)
    {
        d=n%10;
        n/=10;
        c++;
    }
    return c;
}
int main()
{
    int n,r;
    scanf("%d",&n);   
    r=digits(n);
    printf("%d",r);
    return 0;
}


