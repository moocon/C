#include <stdio.h>
void exchange_string_by_pointer (char **a, char **b);

int main (void)
{
  char string1[] = "123";
  char string2[] = "ABC";  
  printf ("string1 = %s, string2 = %s\n", string1, string2);
  exchange_string_by_pointer (&string1, &string2);
  printf ("string1 = %s, string2 = %s\n", string1, string2); 
  return 0;
}


void exchange_string_by_pointer (char **a, char **b)
{
  char *temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
