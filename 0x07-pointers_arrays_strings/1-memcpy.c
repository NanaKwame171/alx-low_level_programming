char *_memcpy(char *dest, char *src, unsigned int n)
{
  char *ptr = dest;
  while (n--) {
    *ptr = *src;
    ptr++;
    src++;
  }
  return dest;
}
