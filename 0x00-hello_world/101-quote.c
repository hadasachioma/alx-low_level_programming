#include <unistd.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-1-19",
 * followed by a newline, to standard error.
 * Return:  always 1.
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora kopar, 2015-10-19\n", 59);
	return (1);
}
