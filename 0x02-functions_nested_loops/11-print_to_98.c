#include "main.h"
/**
 * print_to_98 - prints natural numbers from n upto 98
 *@n: starting point of counting
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i/10 + '0');
			_putchar(i%10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (n < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i/10 + '0');
				_putchar(i % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	
}