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
for (ch = 97 ; ch <= 122 ; ch++)
{
putchar(ch);
}
for (ch = 65 ; ch <= 90 ; ch++)
{
putchar(ch);
}
putchar(10); /*this is the ascii code for a new line*/
return (0);
}
