#include "main.h"
/**
 * _isdigit -  checks for a digit (0 through 9).
 * @c: value been checked
 * Return: 1 if true else return 0
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
