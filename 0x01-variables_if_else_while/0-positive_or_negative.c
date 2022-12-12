#include <stdlib.h>
#include <time.h>

int main() {
	  srand(time(NULL));
	    int n = rand();
	         printf("The number is: %d\n", n);
	             if (n > 0) {
	                 printf("The number is positive\n");
	                   } else if (n == 0) {
	                       printf("The number is zero\n");
	                         } else {
	                             printf("The number is negative\n");
	                               }
	      
	                                 return 0;
	                                 }
	                                 
