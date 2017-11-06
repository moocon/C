/* 知识点 */

//for循环
1. for (初始化表达式;条件表达式;更新表达式)-----while (条件表达式) PS：for的三个表达式可使用任意合法的表达式。

#include <stdio.h>
int main (void) {
  int a, b, c;

  for (a = 0, b = 0, c = 99; a + b < c; a++, b +=10, c--) {
    printf ("a = %02d, b = %02d, a + b = %02d, c = %02d\n", a, b, a + b, c);
  }

  return 0;
}

运行结果：
a = 00, b = 00, a + b = 00, c = 99
a = 01, b = 10, a + b = 11, c = 98
a = 02, b = 20, a + b = 22, c = 97
a = 03, b = 30, a + b = 33, c = 96
a = 04, b = 40, a + b = 44, c = 95
a = 05, b = 50, a + b = 55, c = 94
a = 06, b = 60, a + b = 66, c = 93
a = 07, b = 70, a + b = 77, c = 92
a = 08, b = 80, a + b = 88, c = 91





