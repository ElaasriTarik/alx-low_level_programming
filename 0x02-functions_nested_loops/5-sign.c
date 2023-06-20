#include "main.h"
/**
 * print_sign - prints sign of a number, fllowd by a new lines
 * Void: No retuen
 */
int print_sign(int r)
{
if (r > 0)
{
printf("+, %d", r);
return (1);
}
else if (r < 0)
{
printf("-, %d", r);
return (-1);
}
else
{
printf("0, %d", r);
return (0);
}
}
