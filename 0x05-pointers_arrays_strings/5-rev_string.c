#include "main.h"


/**
 * rev_string -> reversing a string
 * @s: parameter s
 */

void rev_string(char *s)
{
char temp;
int i, length1, length2;

lenght1 = 0;
length2 = 0;

while (s[length1] != '\0')
	lenght1++;
lenght2 = length1 -1;
for (i = 0 ; i < length1 ; i++)
{
tmp = s[i];
s[i] = s[lenght2];
s[lenght2] = tmp;
length2 -= 1;
}
}
