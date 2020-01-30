#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	int y;
	int z;
	
	/*gets the numbers from user*/
	printf("Please enter a number:\n");
	scanf("%i", &x);
	
	printf("Please enter another number:\n");
	scanf("%i", &y);
	
	printf("Please enter another number:\n");
	scanf("%i", &z);
	
	/*displays the answers from the functions*/
	printf("The min is %i", min(x,y,z));
	printf("\nThe max is %i", max(x,y,z));
	printf("\nThe average is %e", avg(x,y,z));
	

	
	
	
	return 0;
}
