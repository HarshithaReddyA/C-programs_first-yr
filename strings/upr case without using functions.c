#include <stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    for(int i=0;i<str[i]!='\0';i++)
    {
      if(str[i]>=97&&str[i]<=122)
      {
        str[i]-=32;
      }
    }
    printf("%s",str);
}
