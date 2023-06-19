#include "main.h"

/**
 * largest_number - returns th largest of 3 numbers
 * @a: first integer
 * @b: second interger
 * @c: third integer
 * Return:clargest number
*/

int largest_number(int a, int b, int c)
{
    int largest;

    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    return (largest);
    
}
