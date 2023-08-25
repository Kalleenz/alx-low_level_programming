#include <stdio.h>

/**
 * before - printing a string before main is executed
 * @void: no parameters
 */

void before(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
