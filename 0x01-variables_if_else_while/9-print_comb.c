#include<stdio.h>
#include<string.h>
/**
 * main - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
	putchar((char)i);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
