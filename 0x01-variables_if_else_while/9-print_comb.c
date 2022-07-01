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
int ch;
for (ch = 48 ; ch <= 58 ; ch++)
{
putchar(ch);
if (ch != 58)
{
putchar(44);
putchar(32);
}
}

putchar(10);
return (0);
}
