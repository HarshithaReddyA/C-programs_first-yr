
#include <stdio.h>

int main()
{
    int n1,n2;
    int temp,*a,*b;
    scanf("%d%d",&n1,&n2);
    a=&n1;
    b=&n2;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After swapping n1=%d and n2=%d",n1,n2);
}

