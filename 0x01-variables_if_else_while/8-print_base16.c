#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/**
 *
 * hexadecimal
 * 0 1 2 3 4 5 6 7 8 9 a b c d e f
 */

char ch;
int n;
for (n = 48 ; n <= 58 ; n++)
{
putchar(n);
}
for (ch = 'a' ; ch <= 'f' ; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
