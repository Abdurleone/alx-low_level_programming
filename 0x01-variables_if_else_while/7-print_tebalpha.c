#include <stdio.h>

/**
 * main - prints the lowercase aphabet in reverse,
 * followed by a new line
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
    char ch;

    for (ch = 'z'; ch >= 'a'; ch--)
    {
        putchar(ch);
    }
    putchar('\n');
    return (0);
}