#include <stdio.h>

int _isupper(int c);

int main(void) {
  char c;

  c = 'A';
  printf("%c: %d\n", c, _isupper(c));
  c = 'a';
  printf("%c: %d\n", c, _isupper(c));

  return 0;
}

int _isupper(int c) {
  return (c >= 'A' && c <= 'Z');
}
