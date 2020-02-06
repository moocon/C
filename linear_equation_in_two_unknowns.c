#include <stdio.h>
#include <math.h>

int main (void)
{
	int a, b, c;
	double delta;
	double equation_result;
	printf ("Please input the coefficient of X2:");
	scanf ("%d", &a);
	printf ("Please input the coefficient of X:");
	scanf ("%d", &b);
	printf ("Please input the constant:");
	scanf ("%d", &c);
	delta = b*b - 4*a*c;
	printf ("delta = %f\n", delta);
	if (delta > 0)
	{   
		delta = sqrt(delta);
		equation_result = (-b + delta)/(2*a);
		printf ("the equation result x1 = %f\n", equation_result);
		equation_result = (-b - delta)/(2*a);
		printf ("the equation result x2 = %f\n", equation_result);
	}
	if (delta == 0)
	{
		delta = sqrt(delta);
		equation_result = (-b + delta)/(2*a);
		printf ("the equation result x = %f\n", equation_result);
	}
	if (delta < 0)
		printf ("The equation is no result\n");
    return 0;
}
