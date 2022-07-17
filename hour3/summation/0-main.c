#include "main.h"

/**
* main - entry point
* integer_add and int_mult - function that adds and multiplies two integers
* printf - prints to stdout
* Return: Always success (0)
*/

int main(void)
{
	int sum, multiply;
	
	sum = integer_add(5, 12);
	multiply = int_mult(5, 12);
	
	printf("The sum of 5 and 12 is: %d\n", sum);
	printf("The multiplication of 5 and 12 is: %d\n", multiply);
	
	return (0);
}
