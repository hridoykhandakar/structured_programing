#include <stdio.h>
int main()
{
  int r, number = 987654321;
  while (number > 0)
  {
    r = number % 10;
    printf("%d", r);
    number = number / 10;
  }
  return 0;
}