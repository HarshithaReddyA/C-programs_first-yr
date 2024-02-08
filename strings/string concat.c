#include <stdio.h>
int main()
{
    char str[100];
    char str2[100];
    int i,j,len2;
    scanf("%s",str);
    scanf("%s",str2);
    for(int i=0;i<str2[i]!='\0';i++)
    {
      len2++;
    }
    
    for(i=0,j=len2;str[i]!='\0';i++,j++)
    {
      str2[j]=str[i];
    }
    printf("%s",str2);
}
