#include "main.h"

/**
 * jack_bauer - printing every minute
 */

void jack_bauer(void)
{
	int f, g;

	for (f = 0; f < 24; f++)
	{
		for (g = 0; g < 60; g++)
		{
		_putchar((f / 10) + '0');
		_putchar((f % 10) + '0');
		_putchar(':');
		_putchar((g / 10) + '0');
		_putchar((g % 10) + '0');
		}
	}
}
