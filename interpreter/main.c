#include <stdio.h>

int main() {
    char line[256];
    char memory[256];
    char opcode;
    int count, address, value;

    while(fgets(line, 256, stdin) != NULL) {
        if ( line[0] == 'X' ) 
          break;
        if ( line[0] == '*' ) {
          continue;
        }
        count = sscanf(line, "%d %c %d", &address, &opcode, &value);
        if ( count != 3 ) 
          continue;

        switch (opcode) {
          case '+':
            memory[address] += value;
            break;
          case '-':
            memory[address] -= value;
            break;
          default:
            memory[address] = value;
            break;
        }
    }
    printf("Memory:\n%s\n", memory);
}
