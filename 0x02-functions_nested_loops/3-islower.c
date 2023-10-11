int _islower(int c) {
  for (int i = 'a'; i <= 'z'; i++) {
    if (c == i) {
      return 1;
    }
  }
  return 0;
}
