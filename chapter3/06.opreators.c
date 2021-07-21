//
// Created by olive on 2021/7/21.
//
#include <stdio.h>
int main() {
  int first = 0;
  int second = 0;
  int third;

  third = second = first;

  int left, right;
  left = 2;
  right = 3;

  int sum;
  sum = left + right;
  int diff = left - right;
  int product = left * right;
  int quotient = left / right;
  float quotient_float = left / right;
  float  quotient_float_correct = left * 1.f / right;
  int remainder = left % right;

  int quotient_1 = 100 / 30 ;

  printf("sum:%d\n", sum);
  printf("diff:%d\n", diff);
  printf("product:%d\n", product);
  printf("quotient:%d\n", quotient);
  printf("quotient_float:%d\n", quotient_float);
  printf("quotient_float_correct:%d\n", quotient_float_correct);
  printf("remainder:%d\n", remainder);
  printf("quotient_1:%d\n", quotient_1);


  // > < >= <= == !=
  // true: 1, false: 0
  printf("3 > 2: %d\n", 3 > 2);
  printf("3 < 2: %d\n", 3 < 2);
  printf("3 <= 3: %d\n", 3 <= 3);
  printf("3 >= 3: %d\n", 3 >= 3);
  printf("3 == 3: %d\n", 3 == 3);
  printf("3 != 3: %d\n", 3 != 3);

  // && 与 || 或
  printf("3 > 2 && 3 < 2: %d\n", 3 > 2 && 3 < 2);
  printf("3 > 2 || 3 < 2: %d\n", 3 > 2 || 3 < 2);

  // ++ --
  int i = 1;
  int j = i++; // j = 1, i = 2;
  int k = ++i; // k = 3, i = 3;

  printf("i: %d\n", i);
  printf("j: %d\n", j);
  printf("k: %d\n", k);

  // bit operators & | ^ ~
#define FLAG_VISIBLE 0x1 // 2^0, 0001
#define FLAG_TRANSPARENT 0x2 // 2^1, 0010
#define FLAG_RESIZABLE 0x4 // 2^2, 0100
  int window_flags = FLAG_RESIZABLE | FLAG_TRANSPARENT; // 0110

  int resizable = window_flags & FLAG_RESIZABLE; // 0100
  int visible = window_flags & FLAG_VISIBLE; // 0000

  // << >>
#define FLAG_VISIBLE 1 << 0 // 2^0, 0001
#define FLAG_TRANSPARENT 1 << 1// 2^1, 0010
#define FLAG_RESIZABLE 1 << 2 // 2^2, 0100

  int x = 1000;
  x * 2;
  x << 1;

  x / 2;
  x >> 1;

  //
  x *= 2; // x = x * 2;
  x /= 2; // x = x / 2;
  x += 2;
  x -= 2;
  x %= 2;

  x >>= 1;
  x <<= 1;

  // ,
  int y;
  y = x = x * 2, x = x + 3; // warning

  return 0;
}

