#include<stdio.h>
int main() 
{
    char st1[100], st2[100];
    printf("Enter the first string: ");
    scanf("%s", st1);
    printf("Enter the second string: ");
    scanf("%s", st2);
    const char *str1=st1,*str2=st2;
    int result=0;
    while (*str1 != '\0' && *str2 != '\0') 
    {
        if (*str1 != *str2) 
        {
            result=*str1 - *str2;
        }
        str1++;
        str2++;
    }
    if (result==0)
    {
        printf("The strings are equal.\n");
    } 
    else if (result < 0) 
    {
        printf("The first string is less than the second string.\n");
    } 
    else 
    {
        printf("The first string is greater than the second string.\n");
    }
    return 0;
}
    

    
