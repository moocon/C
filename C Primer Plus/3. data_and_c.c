/*基本概念*/

/*进制*/
#include <stdio.h>
int main () {
  int x = 256;
  printf ("decimal = %d, octal = %o, hexdecimal = %x",x,x,x);
  return 0;
}


/*函数类型大小*/
#include <stdio.h>
int main (void) {

  printf ("char: %d bytes\n\n", sizeof (char));

  printf ("float: %d bytes\n", sizeof (float));
  printf ("double: %d bytes\n", sizeof (double));
  printf ("long double: %d bytes\n\n", sizeof (long double));

  printf ("int: %d bytes\n", sizeof (int));
  printf ("short (int): %d bytes\n", sizeof (short int));
  printf ("long (int): %d bytes\n", sizeof (long int));
  printf ("long long (int): %d bytes\n\n", sizeof (long long int));

  printf ("_Bool: %d bytes\n", sizeof (_Bool));

  return 0;
}


/*转义字符序列*/
#include <stdio.h>
int main (void) {
  printf ("\a警报\n");
  printf ("abcde\b退格\n");
  printf ("\f换页\n");
  printf ("\r回车\n");
  printf ("\t水平制表符\n");
  printf ("\v垂直制表符\n");
  printf ("\\输出反斜杠\n");
  printf ("\"输出单引号\n");
  return 0;
}
