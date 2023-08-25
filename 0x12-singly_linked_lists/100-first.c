#include <stdio.h>

/**
 * before - printing a string before main is executed
 */

void __attribute__((constructor)) before()
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
