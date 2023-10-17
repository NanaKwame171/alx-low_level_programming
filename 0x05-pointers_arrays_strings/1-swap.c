#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
  int a;
  int b;

  a = 98;
  b = 42;
  printf("Correct output: a = %d; b = %d;\n", a, b);

  swap_int(&a, &b);

  printf("Correct output: a = %d; b = %d;\n", a, b);

  a = 1024;
  b = -4096;
  printf("Correct output: a = %d; b = %d;\n", a, b);

  a = INT_MAX;
  b = INT_MIN;
  printf("Correct output: a = %d; b = %d;\n", a, b);

  return (0); // Return SUCCESS
}
