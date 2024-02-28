#include <stdio.h>

#define MAX 10

int main() {
  int i, v, arr[MAX], count = 0;
  for (i = 0; i < MAX; i++) {
    scanf("%d", &v);
    arr[i] = v;
  }

  for (i = MAX - 1; i >= 0; i--) 
    printf("numb[%d] = %d\n", i, arr[i]);

  printf("Searching for entries equal to 100\n");

  for (i = 0; i < MAX; i++)
    if (arr[i] == 100) {
      printf("Found 100 at %d\n", i);
      count++;
    }

  printf("Found %d entries with 100\n", count);
}
