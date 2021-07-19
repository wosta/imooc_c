//
// Created by olive on 2021/7/19.
//
#include <stdio.h>
int main(){
  char a = 'a';
  char char_l = "l";
  char char_0 = "0";

  char i = 0;// \0, NULL

  // 字面量 literal
  // \n : new line
  // \b : backspace
  // \r : return
  // \t : table
  // \' : ' 字符字面量
  // \" : " 字符串字面量
  char char_1_escape_oct = '\61';
  char char_1_escape_hex = '\x31';
  char newline = '\n';

  printf("char a: %d\n", a);
  printf("char l: %d\n", char_l);
  printf("char 'i': %d\n", i);

  printf("char l: %c\n", char_l);
  printf("char l: %c\n", char_1_escape_oct);
  printf("char l: %c\n", char_1_escape_hex);

  // Unicode CJK Code point.
  // C95
  wchar_t zhong = L'中';
  wchar_t zhong_hex = L'\u4E2D';
  printf("中: %d\n", zhong);
  printf("中: %d\n", zhong_hex);

  // 字符串
  char *string = "中";

  return 0;
}
