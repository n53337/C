#include <stdio.h>

void print_fish(char name[], int args);

int main(int argc, char **argv)
{
   print_fish(argv[1], argc);
}

void print_fish(char name[], int args){
   // Fish art
   printf("\n");
   if(args - 1) printf("%s /\n", name); 
   else printf("fish talk /\n");
   printf("    _/./\n");
   printf(" ,-'    `-:.,-'/\n");
   printf(" > O )<)    _  (\n");
   printf(" `-._  _.:' `-./\n");
   printf("     `` ;\n");
   printf("\n");
}
