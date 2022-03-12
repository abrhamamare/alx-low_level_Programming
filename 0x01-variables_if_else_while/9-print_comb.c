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

	i = 48;
	do{
	putchar((char)i);
	if (i < 57){
	putchar(',');
	putchar(' ');
	}
	i++;
	} while (i <= 57);
	putchar('\n');
	return (0);
}
