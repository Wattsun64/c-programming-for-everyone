#include <stdio.h>

int n = 0;

int bump() {
  extern int n;
  return n++;
}

int main() {
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());

  return 0;
}
