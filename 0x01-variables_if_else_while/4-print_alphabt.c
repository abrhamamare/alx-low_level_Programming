#include<stdio.h>
#include<string.h>
/**
 * main - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e' )
			continue;
		putchar(i);
	}
	return (0);
}

