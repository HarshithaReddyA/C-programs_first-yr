//Logical AND
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b&&a>c)
    {
        printf("\n%d is max",a);
    }
    else if(b>a&&b>c)
        printf("\n%d is max",b);
    else
        printf("\n%d is max",c);
        
    if((a%10==7)||(a%7==0))
        printf("\n%d is Buzz Number",a);
}