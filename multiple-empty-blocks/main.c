#include <stdio.h>

enum {
  NO = 0, YES
};

int main() {
  int c, word = YES, prev;

  while ((c = getchar()) != EOF) {
    word = YES;
    if (c == ' ' &&  c == prev)
      word = NO;
    if (word) {
      putchar(c);
    }
    prev = c;
  }
  return 0;
}
