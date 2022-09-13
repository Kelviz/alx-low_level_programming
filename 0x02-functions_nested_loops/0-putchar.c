#include  "main.h"

/**
 * main -  prints _putchar.
 *
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int l, s;

	s = sizeof(str) / sizeof(str[0]);
	for (l = 0; l < s; l++)
	{
		_putchar(str[l]);
	}
	return (0);
}
