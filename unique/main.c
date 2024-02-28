#include <stdio.h>
#include <string.h>

#define MAX 1000

enum {
  GOOD = 0, BAD
};

int main() {
  char line[MAX];
  char keep[MAX];
  int count = 0;

  while (gets(line) != NULL) {
    if (strcmp(keep, line)) {
      strcpy(keep, line);
      count++;
    }

    if (count == 1) {
      printf("%s\n", keep);
      count = 0;
    }
  }

  return 0;
}