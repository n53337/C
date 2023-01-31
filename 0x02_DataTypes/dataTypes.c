#include <stdio.h>

int main(){
	// integers
	int num  = 12;
	
	// characters
	char txt = 'H';

	// floats
	float fnum = 12.23;
	
	// Print Data Types
	printf("int: %i\n char: %c\n float: %f\n", num, txt, fnum);

	// I/O
	int user_num;
	scanf("%d", &user_num);
	printf("\n%d\n", user_num);
	return 0;

}
