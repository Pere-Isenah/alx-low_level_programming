#include "main.h"
/**
 * _isupper -  a function that checks for uppercase character
 * @c: the char being checked
 * Return: 1 if true else return 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else if (c >= 'a' && c <= 'z')
{
return (0);
}
return (0);
}

