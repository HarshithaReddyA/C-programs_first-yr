#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int c=0;
    scanf("%s",str);
    for(int i=0;i<str[i]!='\0';i++)
    {
        if(str[i]=='a' ||str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U')
        c++;
    }
    printf("%d",c);
    
}
