#include<stdio.h>
#include<string.h>

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	puts("Enter a string: ");
	scanf("%[^\n]",s);
	puts(strlwr(s));
	return 0;
 }
