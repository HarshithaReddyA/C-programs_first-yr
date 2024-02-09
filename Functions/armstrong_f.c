#include <stdio.h>
#include <math.h>
int countDigits(int num) 
{
    int c=0;
    while(num!=0) 
    {
        num/=10;
        c++;
    }
    return c;
}
int isArmstrong(int num) 
{
    int originalNum=num;
    int numDigits=countDigits(num);
    int sum=0;

    while (num!=0) 
    {
        int d=num%10;
        sum+=pow(d,numDigits);
        num/=10;
    }

    return sum==originalNum;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(isArmstrong(n))
    printf("Armstrong");
    else
    printf("Not an Armstrong");
}
