#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int vc=0,dc=0,uc=0,lc=0,sc=0,cc=0;
    scanf("%s",str);
    for(int i=0;i<str[i]!='\0';i++)
    {
      if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
      {
        if(str[i]=='a' ||str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U')
        vc++;
        else 
        cc++;
      }
      else if(str[i]>=48&&str[i]<=57)
          dc++;
      else
          sc++;
        
    }
    printf(" Vowel %d",vc);
    printf("\n Consonent %d",cc);
    printf("\n Digits %d",dc);
    printf("\n Special Char%d",sc);
    
}
