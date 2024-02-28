#include <stdio.h>
#include <string.h>

void process(char line[]) {
  int i = 0, len = strlen(line);
  printf("String: %s\n", line);
  printf("Count=%d\n", len);
  if (len > 10)
    printf("The ninth character is: %c\n", line[9]);
  while (line[i]) {
    if (line[i] == ' ')
      line[i] = '-';
    i++;
  }
  printf("String: %s\n\n", line);
}

int main() {
    char line[1000];
    strcpy(line,"Hi there and welcome to LBS290");
    process(line);
    strcpy(line,"I love C");
    process(line);
}
