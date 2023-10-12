#include <stdio.h>

int _isdigit(int c);

int main(void) {
  char c;

  c = '0';
  printf("%c: %d\n", c, _isdigit(c));
  c = 'a';
  printf("%c: %d\n", c, _isdigit(c));

  return 0;
}

int _isdigit(int c) {
  return (c >= '0' && c <= '9');
}
