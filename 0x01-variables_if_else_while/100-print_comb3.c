#include <stdio.h>
/**
 * main - Outputs a  combination of all two digit numbers.
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int x, y;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x < 56 || y < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
