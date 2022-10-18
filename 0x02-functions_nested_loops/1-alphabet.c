#include "main.h"

/**
 * main - Entry point
 * Description: print alphabeth using _putchar
 */

void print_alphabet(void)

{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
