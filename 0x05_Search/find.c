#include <stdio.h>

// find_num declare
int find_num(int nums[], int length, int num);

int main(int argc, char **argv)
{
  int nums[5] = {3,1,98,43,192};
  int num;
  printf("Type a number: ");
  scanf("%i", &num);

  // check if the number is exist 
  if(find_num(nums, 5, num)){
    printf("Found\n");
    return 0;
  }
  else{
    printf("Not Found\n");
    return 1;
  }
}

// Number Search
int find_num(int nums[], int length, int num){
  for(int i=0; i<length; i++){
    if(num == nums[i]) return 1;
  } 
  return 0;
}
