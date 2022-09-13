#include <stdio.h>

/**
* main - program that prints all single digit numbers of base 10 starting from
* All your code should be in the main function
* Return: 0
*/

int main(void)
{
	int d;
	char low;

	for (d = '0' ; d <= '9'; d++)
		putchar(d);
	for (low = 'a' ; low  <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
