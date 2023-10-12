#include <stdio.h>

int _isupper(int c);

int main() {
  char c;

  printf("Enter a character: ");
  scanf("%c", &c);

  if (_isupper(c)) {
    printf("%c is an uppercase character.\n", c);
  } else {
    printf("%c is not an uppercase character.\n", c);
  }

  return 0;
}

int _isupper(int c) {
  return (c >= 'A' && c <= 'Z');
}
