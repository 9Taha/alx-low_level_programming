#include <stdio.h>

/**
 *  * main - main block
 *
 *   *Descriptio: Print the alphabet in reverse order in lowercase.
 *
 *    * Return: 0
 *
 */

int main(void)

{

	char c;


	for (c = 'z'; c >= 'a'; c--)

	{

	putchar(c);

	}

	putchar('\n');

	return (0);

}
