#include<stdio.h>
#include<string.h>
/**
 * main - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char j;
	int i;

	for (i = 48; i <= 57; i++)
	putchar((char)i);
	for (j = 'a'; j <= 'f'; j++)
	putchar(j);
	putchar('\n');
	return (0);
}

