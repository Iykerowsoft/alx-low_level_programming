#include <stdio.h>

/**
* main - program that prints all single digit numbers of base 10 starting from
* All your code should be in the main function
* Return: 0
*/

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0);
}
