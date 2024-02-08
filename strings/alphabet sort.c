#include <stdio.h>
int main()
{
    char str[100]; char temp;
    scanf("%[^\n]s",str);
    for(int i=0;i<str[i]!='\0';i++)
    {
      for(int j=i+1;j<str[j]!='\0';j++)
      {
          if(str[i]>str[j])
          {
              temp=str[i];
              str[i]=str[j];
              str[j]=temp;
          }
      }
    }
    printf("%s",str);
}
    
