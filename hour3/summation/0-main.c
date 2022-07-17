#include "main.h"

/**
* main - entry point
* integer_add - function that adds two integers
* printf - prints to stdout
* Return: Always success (0)
*/

int main(void)
{
	int sum;
	
	sum = integer_add(5, 12);
	printf("The sum of 5 and 12 is: %d\n", sum);
	return (0);
}
