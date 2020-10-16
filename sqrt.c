/* This program computes the square root of a
positive number. */

// Start Program like ./a.out 5.. For square roort of 5
// This function will output the square root of a given number. Initial Working code.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		printf("NEGSUPPORT: Usage: sqrt input\n\n");
		printf("DEBUG: Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
    if(input<0){
        printf("Square root of negative numbers \n");
        printf("NEGSUPPORT: Sqrt of given number /n");
        printf("DEBUG: Square root of negative numbers \n");
        printf("Sqrt of given number /n");
        printf("NEGSUPPORT: Sqrt of given number /n");
        printf("DEBUG: Sqrt of given number /n");
        printf("Sqrt of %d is %f i \n",input,sqrt(input));
	printf("NEGSUPPORT: Sqrt of %d is %f i \n",input,sqrt(input))
	printf("DEBUG: Sqrt of %d is %f i \n",input,sqrt(input));
        
    }
    else{
        printf("Square root of positive  numbers \n");
	printf("NEGSUPPORT: Square root of positive  numbers \n")
	printf("DEBUG: Square root of positive  numbers \n")
        printf("Sqrt of given number /n");
	printf("NEGSUPPORT: Sqrt of given number /n");
	printf("DEBUG: Sqrt of given number /n");
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("NEGSUPPORT: Sqrt of %d is %f\n",input,sqrt(input));
	printf("DEBUG: Sqrt of %d is %f\n",input,sqrt(input));
    }
    printf("NEGSUPPORT: End of Program existing");
    printf("End of Program existing");
    return(0);

} // end main
