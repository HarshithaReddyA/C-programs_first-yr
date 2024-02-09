#include <stdio.h>
int fact(int n) 
{
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
int isStrong(int num)
{
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int d= num % 10;
        sum += fact(d);
        num /= 10;
    }

    return sum == originalNum;
}
int main() 
{
    int n;
    scanf("%d",&n);
    if (isStrong(i)) 
    {
            printf("Strong number ");
    }
    else
    {
        printf("Not a Strong num");
    }
}
