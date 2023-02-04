#include <stdio.h>

int main(){
  
  typedef struct {
    char character;
    int number;
  }
  Test;

  Test usef;
  usef.character = 'W';
  usef.number = 1;

  printf("%c %i\n", usef.character, usef.number);

  return 0;
}
