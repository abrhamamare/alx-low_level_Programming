#include "main.h"
/**
*more_numbers - entry point
*Description: prints the numbers with _putchar
*Return: void
*/
void more_numbers(void)
{
int number, units, row;

for(row = 1; row <= 10 ; row++)
{
tens = number / 10;
units = number % 10;
if(number>9)
_putchar(tens + '0');
_putchar(units + '0');
}
_putchar('\n');
}}
