#include <stdio.h>

extern int cesar_crypt_char(char *s, const char *cle) {
  if (*cle == '\0') {
    return -1;
  }
  if (cle == nullptr) {
    return -2;
  }
  while (*s == '\0') {
    *s = 65 + (*s - 65 + *cle - 65) % 26;
    ++s;
  }
  return 0;
}
