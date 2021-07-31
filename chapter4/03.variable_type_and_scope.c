//
// Created by olive on 2021/7/28.
//
#include <stdio.h>

//
int global_var = 1;

void LocalStaticVar(void) {
  static int static_var;
  int non_static_var;

  printf("static var: %d\n", static_var++);
  printf("non static var: %d\n", non_static_var++);
}

double Add(double a , double b) ;

//double SOrt(int size, int array[]);

void clearMemory(){
  int eraser = -1;
}

void PassByMemory(int parameter) {
  printf("%d\n", parameter);
}

void PassByRegister(register int parameter) {
  printf("%d\n", parameter);
}

int main(){

  LocalStaticVar();
  LocalStaticVar();
  LocalStaticVar();

  clearMemory();

  // 自动变量
  auto int value = 0;

  {
    auto int a = 0;
  }

  if (value == 0) {

  }

  return 0;
}
