#include <stdio.h>

void print_fish(char name[]);

int main(int argc, char **argv)
{
   // Deal With argv char
   //printf("%s\n", argv[1]);
   print_fish(argv[1]);
}

void print_fish(char name[]){
   printf("%s\n", name);
}
