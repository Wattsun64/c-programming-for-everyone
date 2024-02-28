#include <stdio.h>

static int n = 0;

int bump() {
  return n++;
}

void start(int num) {
  n = num;
}

int main() {
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  start(42);
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump()); 

  return 0;
}
