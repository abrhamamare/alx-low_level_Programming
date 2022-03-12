/**
 * main - just
 * Return: 0
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
int i;
char s[25];
puts("Enter the string\n");
scanf("%s",s);
for(i=0;i<=strlen(s);i++){
	if(s[i]>=65 && s[i]<=90)
		s[i]=s[i]+32;
}
puts("s\n")
return (0);
}
