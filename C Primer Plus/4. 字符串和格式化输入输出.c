/* 知识点 */

//strlen 和 sizeof
#include <stdio.h>
#include <string.h>
#define LENGTH "hello world"                   //用define定义符号常量，便于整体修改
int main (void) {
  printf ("%d\n", strlen (LENGTH));            //strlen ()函数计算字符串的长度，包括空格在内 
  printf ("%d", sizeof (LENGTH));              //sizeof ()运算符计算字符串长度并上结束符null(\0)
  return 0;                                    //所以sizeof () = strlen () + 1
}

//printf () 转换说明
#include <stdio.h>
int main () {
  int integer_number = 1000;
  float float_number = 0.0123;
  char char_character = 'A';
  char char_character_string [] = "hello";

  printf ("\ninteger_number: *%10d*\n",integer_number);            //"%10d"表示最小字段宽度为10，字符没那么长就用空格替代
  printf ("integer_number: *%-10d*\n\n",integer_number);

  printf ("float_number: %.6f\n", float_number);                   //"%.3f"表示小数点右边保留的位数，原数小数位数不够补零，多了则采取四舍五入规则
  printf ("float_number: %.3f\n", float_number);
  printf ("float_number: %.2e\n\n", float_number);                 //"%e"表示科学计数法，只用在浮点数上

  printf ("char_character: %c\n", char_character);                 //"%c"表示打印一个字符
  printf ("char_character: %d\n", char_character);                 //"%d"表示打印'A'所对应的ASCII码
  printf ("char_character: %o\n", char_character);                 //"%d"表示打印'A'所对应的ASCII码的八进制
  printf ("char_character: %#o\n", char_character);
  printf ("char_character: %x\n", char_character);                 //"%d"表示打印'A'所对应的ASCII码的十六进制
  printf ("char_character: %#x\n\n", char_character);

  printf ("char_character_string: %s\n", char_character_string);   //"%s"表示打印一个字符串
  printf ("char_character_string: %.2s\n", char_character_string); //"%.2s"表示从左边开始，只要打印两个字符

  return 0;
}
