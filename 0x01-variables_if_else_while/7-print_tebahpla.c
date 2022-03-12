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

	for (i = 'z'; i >= 'a'; i--)
	putchar(i);
	putchar('\n');
	return (0);
}
