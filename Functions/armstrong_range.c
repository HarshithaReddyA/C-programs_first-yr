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
    int start, end;
    printf("Enter the range to find Armstrong numbers: ");
    scanf("%d %d", &start, &end);
    if (start<=0||end<=0||start>end) 
    {
        printf("Invalid range.\n");
        return 1;
    }
    printf("Armstrong numbers in the range [%d, %d] are: ",start,end);
    for (int i=start;i<=end;i++) 
    {
        if (isArmstrong(i)) 
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}


