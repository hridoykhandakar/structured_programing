#include <stdio.h>
int main()
{
  int given_number = 4321, reverse, count = 0, sum = 0;
  do
  {
    reverse = given_number % 10;
    sum = sum + reverse;
    count += 1;
    printf("%d ", reverse);

    given_number = given_number / 10;
  } while (given_number > 0);

  printf("%d \n", sum);
  printf("%d ", count);
  return 0;
}