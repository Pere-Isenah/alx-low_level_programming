#include "main.h"
/**
* _print_sign -  prints the sign of a number
* @n:is int being  checked
* Return 1 if greater than zero, return 0 if equal to 0,
* else return -1 if less than zero
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
