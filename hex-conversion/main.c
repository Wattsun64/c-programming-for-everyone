#include <stdio.h>

int htoi(char s[]) {
  int i, n = 0;

  for (i = 0; s[i]; ++i) {
    int j;
    char *c = s + i;
    if (*c >= '0' && *c <= '9')
      j = *c - '0';
    if (*c >= 'a' && *c <= 'f')
      j = 10 + *c - 'a';
    if (*c >= 'A' && *c <= 'F')
      j = 10 + *c - 'A';

    printf("%c = %d\n", *c, j);
      
    n = 16 * n + j;

  }

  return n;
}

int main() {
  char *c = "f";

  htoi(c);

  c = "F0";
  htoi(c);
  

  /* printf("htoi('0123456789abcdef') = %d\n", htoi("0123456789abcdef")); */
  printf("htoi('f') = %d\n", htoi("f"));
  printf("htoi('F0') = %d\n", htoi("F0"));
  printf("htoi('12fab') = %d\n", htoi("12fab"));
  return 0;
}
