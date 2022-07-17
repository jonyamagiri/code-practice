#include <stdio.h>

/**
* main - entry point
* integer_add - function that adds two integers
* Return: sum of the two numbers
*/

/* function prototype */
int integer_add(int x, int y);

int main(void)
{
	int i = 5, j = 12, sum;
	
	sum = integer_add(i, j);
	printf("The addition of %d and %d is: %d\n", i, j, sum);
	return (0);
}

int integer_add(int x, int y)
{
	return (x + y);
}
