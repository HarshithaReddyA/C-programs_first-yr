//To print the even sum of the elements of the array
#include <stdio.h>

int main()
{
   int n,s=0;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++)
   {
       if(a[i]%2==0)
       {
        s+=a[i];
       }
   }
   printf("%d",s);
    return 0;
}


