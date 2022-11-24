#include <stdio.h>
int main()
{
  int a = 0, b = 1, c = a + b, n = 20;
  printf("%d ", a);
  printf("%d ", b);
  while (c <= n)
  {

    printf("%d ", c);
    a = b;
    b = c;
    c = a + b;
  }
  return 0;
}