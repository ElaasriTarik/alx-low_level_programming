#include "main.h"
/**
 *_islower - checks for a lowercase character
 *@a: letter being tested
 * Return: Always 0
 */
int _islower(int a)
{
if (a >= 97 && a <= 122)
return (1);
else
return (0);
}
