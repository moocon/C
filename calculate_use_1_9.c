#include <stdio.h>
void no_repetition_1_9 (void);
void diff_abc (void);

int main (void)
{
  no_repetition_1_9 ();
  diff_abc ();
  return 0;
}


/*在（）内填上数字1---9,使等式成立,不能重复.（ ）/（ ）X（ ）=（ ）（ ）；（ ）+（ ）—（ ）=（ ）.*/
void no_repetition_1_9 (void)
{
  printf ("***no_repetition_1_9***\n");
  int a, b, c;
  int i, j, k;
  int plu_min = 0;
  int mul_div = 0;
  int mul_div_1 = 0;
  int mul_div_2 = 0;
  /*mul_div*/
  for (a =  9; a > 1; a--)
    for (b = 1; b < a; b++)
      for (c = 1; c < 10; c++)
        if ((a != 5) && (b != 5) && (c != 5) && (a / b * c > 10) && (c != a) && (c != b) && (a % b == 0))
        {
          mul_div = a / b * c;
          mul_div_1 = mul_div / 10;
          mul_div_2 = mul_div % 10;
          if ((mul_div_1 != a) && (mul_div_1 != b) && (mul_div_1 != c) && (mul_div_2 != a) && (mul_div_2 != b) && (mul_div_2 != c))

          
          /*plu_min*/
          for (i =  9; i > 0; i--)
            for (j = 1; j < 10; j++)
              for (k = 1; k < 10; k++)
                if ((i + j > k) &&(i + j - k < 10) && (k != i) && (k != j) && (i != j))
                {
                  plu_min = i + j - k;
                  if ((plu_min != i) && (plu_min != j) && (plu_min != k))
                    if ((i != a) && (i != b) && (i != c) && (i != mul_div_1) && (i != mul_div_2))
                      if ((j != a) && (j != b) && (j != c) && (j != mul_div_1) && (j != mul_div_2)) 
                        if ((k != a) && (k != b) && (k != c) && (k != mul_div_1) && (k != mul_div_2)) 
                          if ((plu_min != a) && (plu_min != b) && (plu_min != c) && (plu_min != mul_div_1) && (plu_min != mul_div_2))
                          {
                            printf ("%d ÷ %d x %d = %d\n", a, b, c, mul_div);
                            printf ("%d + %d - %d = %d\n\n", i, j, k, plu_min);
                          }
                }  
        }
}


/* 同时满足下面两个等式，且a,b,c不相等（ a）/（b ）X（ c）=（ ）（ ）；（ a）+（ b）—（ b）=（ ）.*/
void diff_abc (void)
{
  printf ("\n\n***diff_abc***\n");
  int i = 0;
  int j = 0;
  int k = 0;
  int mul_div = 0;
  int mul_div_1 = 0;
  int mul_div_2 = 0;
  int plu_min = 0;

  for (i = 9; i > 1; i--)
      for (j = 1; j < i; j++)
          for (k = 1; k < 10; k++)
            if ((i != 5) && (j != 5) && (k != 5) && (k != i) && (k != j) && (i % j == 0) && (i / j * k > 10) && (i + j -k > 0) && (i + j -k < 10))
            {
              mul_div = i / j * k;
              mul_div_1 = mul_div / 10;
              mul_div_2 = mul_div % 10;
              plu_min = i + j - k;
              if ((mul_div_1 != i) && (mul_div_1 != j) && (mul_div_1 != k) && (mul_div_2 != i) && (mul_div_2 != j) && (mul_div_2 != k))
                if((plu_min != i) && (plu_min != j) && (plu_min != k))
                {
                  printf ("%d ÷ %d x %d = %d\n", i, j, k, mul_div);
                  printf ("%d + %d - %d = %d\n\n", i, j, k, plu_min);
                }
            }
} 
