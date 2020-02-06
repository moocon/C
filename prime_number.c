#include <stdio.h>
int result_function (int x);

int main (void)
{
  int prime_number = 0;
  for (prime_number = 2; prime_number <= 100; prime_number++)
  {
    if (result_function(prime_number))
      printf ("%d is a prime number\n", prime_number);
  }
  return 0;
} 


int result_function (int x)
{
    int temp = 0;
    for ( temp = 2; temp <= (x + 2)/2; temp++)
    {
      if (temp == (x + 2)/2)
        return 1;
      if (x % temp == 0)
        break;
    }
  return 0;
}
