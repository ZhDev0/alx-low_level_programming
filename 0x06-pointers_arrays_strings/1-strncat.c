#include "main.h"
#include <string.h>

/**
 * *_strncat - like _strcat but it will use n bytes from src
 * @dest: string to be concatenated
 * @src: string to be concatenated until n limit
 * @n: number of bytes that will be used from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
  strcat(dest, src, n);
  return (dest);
}
