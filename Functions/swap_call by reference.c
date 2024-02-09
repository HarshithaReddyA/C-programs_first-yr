/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("Before sawpping a=%d b=%d",a,b);
  swap(&a,&b);
  printf("\nAfter swapping a=%d b=%d ",a,b);
}

#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}

