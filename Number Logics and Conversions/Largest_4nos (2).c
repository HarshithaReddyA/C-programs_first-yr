//Largest of four numbers

#include <stdio.h>

int main()
{
    int a,b,c,d,max;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
        max=a;
    else if(b>a&&b>c&&b>d)
        max=b;
    else if(c>a&&c>b&&c>d)
        max=c;
    else 
        max=d;
    printf("%d is largest of four numbers",max);
    return 0;
}
