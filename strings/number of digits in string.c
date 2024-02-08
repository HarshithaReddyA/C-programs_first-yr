#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int c=0;
    scanf("%s",str);
    for(int i=0;i<str[i]!='\0';i++)
    {
        if(str[i]>=48 && str[i]<=57)
        c++;
    }
    printf("%d",c);
    
}
