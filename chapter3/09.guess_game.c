//
// Created by olive on 2021/7/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
  srand(time(NULL));
  // 如果没有上面这一句，下面这个固定是41
  int magin_num = rand();
  while (true) {
    int guess_num;
    puts("please input your number: ");
    scanf("%d", &guess_num);
    if (guess_num > magin_num) {
      printf("Your number is bigger!\n");
    } else if (guess_num < magin_num) {
      printf("Your number is smaller!\n");
    }else {
      printf("Congratulation!~ You win!\n");
      break;
    }
  }
  return 0;
}
