#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prog printing all possible combinations of two two-digits
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int a, b, c, d;

	for (a = 48; a < 58; a++)
	{
		b = 48;
		while (b < 58)
		{
			c = a;
			d = b + 1;
			while (c < 58)
			{
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (!((a == 57) && (b == 56)))
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				d = 48;
				c++;
			}
			b++;
		}
	}
	putchar('\n');
	return (0);
}
