#include "main.h"

/**
 * _isdigit - checks fo a digit (o through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}