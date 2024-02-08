#include<stdio.h>
int main()
{
    char str[50];
    char ch;
    fgets(str, sizeof(str), stdin);
    int c=0;
    printf("Enter the character\n");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            c++;
        }
    }
    printf("%d",c);
}
    
