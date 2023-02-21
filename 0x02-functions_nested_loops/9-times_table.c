#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if(j != 9)
			{
				if( k < 10)
				{
					_putchar(k + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
					_putchar(',');
				}
			_putchar(' ');
			if (j == 9)
				_putchar('$');
		}
		_putchar('$');
		_putchar('\n');
	}
}