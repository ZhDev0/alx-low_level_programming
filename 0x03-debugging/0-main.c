#include "main.h"


/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < 0)
{
	printf("%d is negative\n", n);
}
int i;

i = 0;

positive_or_negative(i);

return (0);
}
