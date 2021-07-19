//
// Created by olive on 2021/7/19.
//
#include <stdio.h>
int main () {
  float a_float = 3.14f;
  printf("size of float: %d\n", sizeof(float));
  double a_double = 3.14;
  printf("size of double: %d\n", a_double);

  float  lat = 39.90815f;
  printf("%f", 39.908156f - lat);

  float  money = 3.14f; // error, never use float
  return 0;
}
