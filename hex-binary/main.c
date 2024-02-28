#include <stdio.h>
#include <string.h>

void reverse(char t[]) {
    printf("%s\n", t);
    int i, j, len;
    char tmp;
    len = strlen(t);
    for(i=0, j=len-1;;i++,j--) {
        if (j<i) break;
        tmp = t[i];
        t[i] = t[j];
        t[j] = tmp;
    }
    return;
}

void itob(int n, char s[]) {
  	int i = 0;
  	while (n > 0) {
      s[i++] = n % 2 + '0';
      n /= 2;
    }
    s[i] = '\0';
  	reverse(s);
}

void itoh(int n, char s[]) {
  int hex[16] = {
    '0', '1', '2', '3', '4', '5',
    '6', '7', '8', '9', 'a', 'b',
    'c', 'd', 'e', 'f'
  };
  int i = 0;
  while (n > 0) {
    int j = n % 16;
    int c = hex[j];
    s[i++] = c;
    n /= 16;
  }
  	s[i] = '\0';
  	reverse(s);
}


int main() {
  char s[1000];

  itob(42,s);
  printf("42 in base-2 is %s\n", s);
  // Output: 2a
  itoh(42,s);
  printf("42 in base-16 is %s\n", s);

  itob(16,s);
  printf("16 in base-2 is %s\n", s);
  itoh(16,s);
  printf("16 in base-16 is %s\n", s);

  itob(59,s);
  printf("59 in base-2 is %s\n", s);
  // Output: 3b
  itoh(59,s);
  printf("59 in base-16 is %s\n", s);

  itob(100,s);
  printf("100 in base-2 is %s\n", s);
  itoh(100,s);
  printf("100 in base-16 is %s\n", s);

  itob(254,s);
  printf("254 in base-2 is %s\n", s);
  // Output: fe
  itoh(254,s);
  printf("254 in base-16 is %s\n", s);
  return 0;
}
