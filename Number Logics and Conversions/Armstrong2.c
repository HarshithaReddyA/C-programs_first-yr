/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int n,t,d,c=0,s=0;
    scanf("%d",&n);
    t=n;
    int t2=n;
    while(n!=0)
    {
        n/=10;
        c++;
    }
    while(t!=0)
    {
        d=t%10;
        s+=pow(d,c);
        t/=10;
    }
    if(s==t2)
    {
        printf("Armstrong");
    }
}

