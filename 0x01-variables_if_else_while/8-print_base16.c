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
int n;
for (n = 48 ; n <= 58 ; n++)
{
putchar(n);
}
char ch;
for (ch = 'a' ; ch <= 'f' ; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
