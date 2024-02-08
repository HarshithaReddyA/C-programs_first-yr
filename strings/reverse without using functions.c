#include <stdio.h>
int main()
{
    char str[100];
    char str2[100];
    int n=0,i,j;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
      n++;
    }
    for(i=0,j=n-1;j>=0;i++,j--)
    {
       str2[i]=str[j];
    }
    str2[i]='\0';
    printf("%s",str2);
}
