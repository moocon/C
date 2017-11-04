/* 知识点 */

//使用C语言的七个步骤// 
  （1）定义程序目标
  （2）设计程序
  （3）编写代码
  （4）编译代码
  （5）运行程序
  （6）测试和调试程序
  （7）维护和修改程序
  
  
/* review questions */
/* Programming exercise */

//设计英寸转厘米程序//
1.program objective:实现英寸转厘米
2.design the program:
  （1）提示用户输入英寸。
  （2）需要定义两个变量：*用户输入的英寸 *转化后得到的厘米量
  （3）打印输出转化后的厘米量。
  （4）提示用户程序结束。

//有参数传递,并且有返回值
#include <stdio.h>
#define INCH_SWITCH_CENTIMETER 2.54           //定义符号常量
float inch_to_centimeter (float);             //声明原型函数，(void)指明函数带一个float类型的参数
float inch = 0;
float centimeter = 0;
int main () {
  printf ("Please input inch:");
  scanf ("%f", &inch);
  inch_to_centimeter (inch);                   //传递实参inch到inch_to_centimeter(float x)
  printf ("The centimeter: %f", inch_to_centimeter (inch));
return 0;
}
float inch_to_centimeter (float x) {          //x为形参，用来接收main函数传递过来的值
  centimeter = INCH_SWITCH_CENTIMETER * x;
  return centimeter;                         //将centimeter传回给main函数
}


//有参数传递，无返回值
#include <stdio.h>
#define INCH_SWITCH_CENTIMETER 2.54           //定义符号常量
void inch_to_centimeter (float);             //声明原型函数，(void)指明函数带一个floa类型的参数
float inch = 0;
float centimeter = 0;
int main () {
  printf ("Please input inch:");
  scanf ("%f", &inch);
  inch_to_centimeter (inch);                   //传递inch实参到inch_to_centimeter(float x)
return 0;
}
void inch_to_centimeter (float x) {          //x为形参，用来接收main函数传递过来的值
  centimeter = INCH_SWITCH_CENTIMETER * x;
  printf ("The centimeter: %f", centimeter);
}


//无参数传递，有返回值
#include <stdio.h>
#define INCH_SWITCH_CENTIMETER 2.54           //定义符号常量
float inch_to_centimeter (void);              //声明原型函数，(void)表明函数不带参数
float inch = 0;
float centimeter = 0;
int main () {
  inch_to_centimeter ();                      //调用函数inch_to_centimeter ()。注意调用函数时，*****不传递参数是()保留为空*****。
  printf ("The centimeter: %f", inch_to_centimeter ());
return 0;
}
float inch_to_centimeter () {
  printf ("Please input inch:");
  scanf ("%f", &inch);
  centimeter = INCH_SWITCH_CENTIMETER * inch;
  return centimeter;
}


//无参数，无返回值
#include <stdio.h>
#define INCH_SWITCH_CENTIMETER 2.54           //定义符号常量
void inch_to_centimeter (void);                  //声明原型函数，()指明函数的属性是不带参数
float inch = 0;
float centimeter = 0;
int main (void) {
  inch_to_centimeter ();                     ////调用函数inch_to_centimeter ()。注意调用函数时，*****不传递参数是()保留为空***                  
return 0;
}
void inch_to_centimeter (void) {
  printf ("Please input inch:");
  scanf ("%f", &inch);
  centimeter = INCH_SWITCH_CENTIMETER * inch;
  printf ("The centimeter: %f", centimeter);
}

