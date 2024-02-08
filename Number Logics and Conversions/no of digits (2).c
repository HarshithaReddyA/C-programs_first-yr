//WAP to find number of digits of a number
#include <stdio.h>

int main ()
{
  int n, d, c = 0;
  scanf ("%d", &n);
  while (n != 0)
    {
      d = n % 10;
      n /= 10;
      c++;
    }
  printf ("%d", c);

  return 0;
}

