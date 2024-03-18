#include <stdio.h>

void py_lstrip(char inp[]) {
  int i = 0;
  while (inp[i]) {
    if (inp[i] != ' ')
      break;
    inp[i++] = 2;
  }
}

int main() {
    char s1[] = "         Hello   World    ";
    py_lstrip(s1);
    printf("-%s-\n", s1);
}
