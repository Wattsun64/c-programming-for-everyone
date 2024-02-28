#include <stdio.h>

struct People {
  char *name;
  int age;
  char *gender;
};

void print_chars(char *c) {
  int i = 0;
  while (c[i]) {
    printf("%c\n", c[i]);
    i++;
  }
  printf("\n");
}


int main(int argc, char *argv[]) {
  int i = 1;

  while (argv[i]) {
    if (argv[i] != NULL)
      print_chars(argv[i]);
    i++;
  }

  return 0;
}
