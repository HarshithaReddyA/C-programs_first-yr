#include<stdio.h>
int main()
{
    int i,n,sum,ll,ul;
    printf("Enter the range:\n");
    scanf("%d%d",&ll,&ul);
    for(n=ll;n<=ul;n++)
    {
        i=1;
        sum = 0;
        while(i<n)
        {
            if(n%i==0)
             sum=sum+i;
             i++;
        }   
        if(sum==n)
             printf("%d ",n);
  }
         printf("\n");
}
