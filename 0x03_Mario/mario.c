#include <stdio.h>

int main(){
  int bricks = 12;

  // print Bricks
  for(int i = 0; i<bricks / 2; i++){
    for(int j = 0; j<bricks; j++){
      printf("#");
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}
