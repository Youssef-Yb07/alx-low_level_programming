#include <stdio.h>
/**
 * main - Prints the alphabet except the letters q and e.
 *
 * Return: 0 on success
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
