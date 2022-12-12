#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	  srand(time(NULL));
	    int n = rand();

	      // Print the number
	         printf("The number is: %d\n", n);
	      
	           // Check if the number is positive, zero, or negative
	             if (n > 0) {
	                 printf("The number is positive\n");
	                   } else if (n == 0) {
	                       printf("The number is zero\n");
	                         } else {
	                             printf("The number is negative\n");
	                               }
	      
	                                 return 0;
	                                 }
	                                 
