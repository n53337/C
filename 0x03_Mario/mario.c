#include <stdio.h>

// Display Blocks function
void render_blocks(int blocks){
   // print Bricks
  for(int i = 0; i < blocks / 2; i++){
    for(int j = 0; j < blocks; j++){
      printf("#");
    }
    printf("\n");
  }

}

// Main Function
int main(){
  int blocks;

  // user Input
  printf("===== WELCOME TO MARIO =====\n");
  printf("ENTER NUMBER OF BLOCKS: ");
  scanf("%i",&blocks);
  
  // verify user input
  if(blocks > 0){
    render_blocks(blocks);
  }
  else main();

  return 0;
}


