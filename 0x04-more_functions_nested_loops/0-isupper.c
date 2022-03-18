#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks wheather the data is upper case or lower case
 * Return: 0 or 1
 */
int _isupper(int c){
if(c >= 'A' && c <= 'Z'){
return (1);
}else{
return (0);
}
}
