#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
		putchar('\n');
	}
	return (0);
}
