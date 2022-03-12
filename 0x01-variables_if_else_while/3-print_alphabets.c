#include<stdio.h>
#include<string.h>
/**
 * main - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char i, j;

	for(i = 'a';i <= 'z';i++){
	putchar(i);
	}
	for(j = 'A';j <= 'Z';j++){
	putchar(j);
	}
	putchar('$');
	return (0);
}

