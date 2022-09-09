#include <stdlib>
#include <time.h>
#include <stdio.h>

/**
* main - prints if the number is positive, negativ* e or zero
* 
* Description: using the main function
* this program prints "Programming is positive, ze* ro or negative
* Return: 0 means success
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
{
        printf("%i is positive\n", n);
}
else if (n == 0)
{
        printf("%i is zero\n", n);
}
else if (n < 0)
{
        printf("%i is negative\n", n);
}
return (0);
}
