#include<stdio.h>
#include<string.h>
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
int main()
{
	char s[100];
	scanf("%[^\n]",s);
	while (s[i]!='\0')
	{
	if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	i++;
   }
	puts(s);
	return 0;
}
