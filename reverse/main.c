#include <stdio.h>
#include <string.h>

char *reverse(char t[]) {
  int i, n = strlen(t) - 1;
  for (i = 0; i <= n; i++) {
    const int first = t[i];
    const int last = t[n];
    t[n] = first;
    t[i] = last;
    n--;
  }
  return t;
}

/* copy s1 to s2; assume s2 big enough */
char *copy(char s1[], char s2[]) {
    int i;
    for(i=0;(s2[i] = s1[i]);i++);
    return s2;
}

int main() {
  char t[1000];

  copy("Hello world", t);
  printf("%s\n", t);
  reverse(t);
  printf("%s\n", t);
  reverse(copy("XY", t));
  printf("%s\n", t);
  reverse(copy("Even", t));
  printf("%s\n", t);
  reverse(copy("Odd", t));
  printf("%s\n", t);
  reverse(copy("civic", t));
  printf("%s\n", t);
}

