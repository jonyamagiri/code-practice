#include <stdio.h>

/**
* main - entry point
* int_mul - function that multiplies two integers
* Return: result of multiplication of the two numbers
*/

/* function prototype */
int int_mul(int x, int y);

int main(void)
{
	int i = 5, j = 12, multiply;
	
	multiply = int_mul(i, j);
	printf("Multiplication of %d and %d results in: %d\n", i, j, multiply);
}

int int_mul(int x, int y)
{
	return (x * y);
}
