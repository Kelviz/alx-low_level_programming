#include <stdio.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		if (cha == 'q' || cha == 'e')
		{
			continue;
		}
		else
		{
			putchar(cha);
		}
	}
	putchar('\n');
	return (0);
}
