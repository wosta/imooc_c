//
// Created by olive on 2021/7/19.
//
#include <stdio.h>

#define COLOR_RED 0xFF0000
#define COLOR_GREEN 0X00FF00
#define COLOR_BLUE  0X0000FF

int main(){
  // const <type> readonly variable
  const int kRed = 0xFF0000;
  const int kGreen = 0x00FF00;
  const int kBlue = 0x0000FF;
  printf("kRed: %d\n", kRed);

  int *p_k_red = &kRed;
  *p_k_red = 0;
  printf("kRed: %d\n", kRed);

  // macro
  printf("COLOR_RED: %d\n", COLOR_RED);

#undef COLOR_RED

  // printf("COLOR_RED: %d\n", COLOR_RED);



  return 0;
}
