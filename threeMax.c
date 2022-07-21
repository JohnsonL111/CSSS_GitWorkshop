#include <stdio.h>


// Finds the max of three values a, b and c
int threeMax (int a, int b, int c)
{
	if (a >= b && a >= c)
	{
		return a;
	}
	
	if (b >= a && b >= c)
	{
		return b;
	}

	if (c >= a && c >= b)
	{
		return c;
	}
}

void main ()
{
	int a = 100;
	int b = 1000;
	int c = 10000;

	int max = threeMax (a, b, c);	

	printf("Result of threeMax(%d, %d, %d) = %d\n", a, b, c, max);
}

