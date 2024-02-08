//LCM of two numbers
#include <stdio.h>

int main()
{
    int n1,n2,lcm,max;
    scanf("%d%d",&n1,&n2);
    max=(n1>n2)?n1:n2;
    for(int i=1;i<=max;max++)
    {
        if(max%n1==0&&max%n2==0)
        break;
    }
    printf("LCM is %d",max);
    return 0;
}

