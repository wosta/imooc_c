#include <stdio.h>

void EmptyParamList(void) {
  puts("Hello");
}

// 函数原型 / 声明
void EmptyList(void);

// left right 没有意义，所以可以忽略
int Add(int left, int right);

int main() {
  printf("Hello, World!\n");
  EmptyParamList();
  // 由于入参已经明确void了 所以会编译出错！
//  EmptyParamList(1);
//  EmptyParamList(1.0, "Hello C");
  EmptyList();
  int result = Add(3, 4);
  printf("result = %d  \n", result);
  return 0;
}

void EmptyList(void) {
  printf("Good\n");
}

int Add(int left, int right) {
  return left + right;
}