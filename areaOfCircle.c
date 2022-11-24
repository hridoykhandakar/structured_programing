/*
 * File Name : areaOfCircle.c
 * Author : Hridoy Khandakar.
 * Date : 21.11.22
 */
#include <stdio.h>
#define PI 3.1416
float areaOfcircle(float r);
int main()
{
  float a, r = 2.6;
  a = areaOfcircle(r);
  printf("%f ", a);
  return 0;
}
float areaOfcircle(float radius_circle)
{

  return PI * radius_circle * radius_circle;
}
