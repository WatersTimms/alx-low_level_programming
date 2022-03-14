#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - entry point
* assigning a random number to a variable n
* print the last number of the n variable.
* Return: 0
*/
int main(void)
{
	int n;
	int a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
if (a > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, a);
else if (a == 0)
printf("Last digit of %d is %d and is 0\n", n, a);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
/* your code goes there */
return (0);
}
