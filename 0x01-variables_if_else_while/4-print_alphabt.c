#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e')
			i = 'f';
		else if (i == 'q')
			i = 'r';
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
