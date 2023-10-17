/**
 * main - checks the reset_to_98() function
 *
 * Return: Always 0.
 */
int main(void)
{
  int n;

  n = 402;
  printf("n = %d\n", n);
  reset_to_98(&n);
  printf("n = %d\n", n);

  /* Test the reset_to_98() function with negative values. */
  n = -4096;
  reset_to_98(&n);
  printf("n = %d\n", n);

  /* Test the reset_to_98() function with INT_MAX. */
  n = INT_MAX;
  reset_to_98(&n);
  printf("n = %d\n", n);

  /* Test the reset_to_98() function with INT_MIN. */
  n = INT_MIN;
  reset_to_98(&n);
  printf("n = %d\n", n);

  return (0);
}
