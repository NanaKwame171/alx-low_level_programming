void print_alphabet(void) {
  // Print the letter 'a'.
  _putchar('a');

  // Iterate from 2 to 26 and print the corresponding lowercase letter.
  for (int i = 2; i <= 26; i++) {
    _putchar('a' + i - 1);
  }

  // Print a newline character.
  _putchar('\n');
}
