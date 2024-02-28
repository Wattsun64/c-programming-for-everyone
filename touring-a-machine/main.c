#include <stdio.h>
#include <stdlib.h>

int n_atoi(char *cp) {
  return (int) strtol(cp, (char **) NULL, 10);
}

int main() {
  char memory[256], token[256];
  int position = 0;

  while(scanf("%s",token) == 1 ) {
    if (token[0] == '>')
      position++;
    else if (token[0] == '<')
      position--;
    else
      memory[position] = n_atoi(token); 

  }
  printf("Memory:\n%s\n", memory);
}
