#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(i%2!=0)
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}
