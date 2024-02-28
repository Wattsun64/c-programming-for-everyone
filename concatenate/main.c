#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
  char s1[MAX], s2[MAX];

  printf("Enter two strings\n");

  scanf("%s", s1);
  scanf("%s", s2);

  strcat(s1, " & "); 
  strcat(s1, s2);

  printf("%s", s1);
}
