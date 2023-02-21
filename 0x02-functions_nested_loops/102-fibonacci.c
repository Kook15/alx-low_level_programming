#include <stdio.h>

/**
 * main - Entry point
 * print - prints first 50 fibonacci numbers starting from 1, 2
 * Return: 0 success
 */

int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int fib;
	int i;

	for (i = 0; i < 50; i++)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		printf("%d", fib);
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
