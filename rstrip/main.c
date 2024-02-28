#include <stdio.h>
#include <string.h>

void py_rstrip(char inp[]) {
  int len = strlen(inp) - 1;
  while (len-- >= 0) {
    if (inp[len] == ' ')
      inp[len] = '\0';
    else
      break;
  }
}

int main() {
  char s1[] = "   Hello   World    ";
  py_rstrip(s1);
  printf("-%s-\n", s1);
  return 0;
}
