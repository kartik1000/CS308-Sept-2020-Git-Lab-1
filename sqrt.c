/* This program computes the square root of a
positive number. */

// Start Program like ./a.out 5.. For square roort of 5
// This function will output the square root of a given number. Initial Working code.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		printf("DEBUG: Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
    if(input<0){
       printf("DEBUG: Sqrt of given number /n");
       printf("DEBUG: Sqrt of %d is %f i \n",input,sqrt(input));
        
    }
    else{
       printf("DEBUG: Sqrt of given number /n");
	   printf("DEBUG: Sqrt of %d is %f\n",input,sqrt(input));
    }
    printf("NEGSUPPORT: End of Program existing");
	return(0);

} // end main
