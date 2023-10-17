#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * reset_to_98 - Updates the value an integer pointer points to, to 98
 * @n: Pointer to an integer
 */
void reset_to_98(int *n)
{
  *n = 98;
}

/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
  int n;

  n = 402;
  printf("Correct output: n = %d\n", n);

  reset_to_98(&n);

  printf("Correct output: n = %d\n", n);

  n = -4096;
  printf("Correct output: n = %d\n", n);

  n = INT_MAX;
  printf("Correct output: n = INT_MAX / n = %d\n", n);

  n = INT_MIN;
  printf("Correct output: n = INT_MIN / n = %d\n", n);

  return (0); // Return SUCCESS
}
