#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - entry point
* assigning a random number to a variable n
* print whether the number stored in variable n is positive or negative
* Return: 0
*/
int main(void)
{
	int n;
srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative \n", n);
/* your code goes there */
return (0);
}
