#include "main.h"
/**
 *_isalpha - checks for any character
 *@a: letter being tested
 * Return: Always 0
 */
int _isalpha(int a)
{
if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
return (1);
else
return (0);
}
