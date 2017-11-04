/* 知识点 */

//for循环
1. for (初始化表达式;条件表达式;更新表达式)-----while (条件表达式) PS：for的三个表达式可使用任意合法的表达式。

#include <stdio.h>
int main (void) {
  int a = 0, b = 0, c = 10;
      
  for (a++; a + b < c; b++) {
    printf ("a = %d, b = %d, a + b = %d, c = %d\n", a, b, a + b, c);
  }
        
  return 0;
}

运行结果：
a = 1, b = 0, a + b = 1, c = 10
a = 1, b = 1, a + b = 2, c = 10
a = 1, b = 2, a + b = 3, c = 10
a = 1, b = 3, a + b = 4, c = 10
a = 1, b = 4, a + b = 5, c = 10
a = 1, b = 5, a + b = 6, c = 10
a = 1, b = 6, a + b = 7, c = 10
a = 1, b = 7, a + b = 8, c = 10
a = 1, b = 8, a + b = 9, c = 10






