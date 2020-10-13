/* This program computes the square root of a
positive number. */

// Start Program like ./a.out 5.. For square roort of 5
// This function will output the square root of a given number

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	return(0);

} // end main
