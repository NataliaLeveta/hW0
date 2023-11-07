#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){ // takes arguments from the command line
    int num1 = atoi(argv[1]);  // num1 : lower limit of number range
    int num2 = atoi(argv[2]); // num2 : high limit of number range
	int c, cmax = 0; // c : counter , cmax : max counter
	long long n;
    if(num1 >= 1 && num1 <= 100000000 && num2 >= 1 && num2 <= 100000000 && num1 < num2 && argc == 3){ 
	    while (num1 <= num2){ // the first given number has to be smaller or equal than the second 
		    n = num1; // n takes the first number we gave 
		    c = 0; // initialize the counter
		    while (n > 1){
			    if (n%2 == 0){ // if the number is even
				    n = n/2; 
				    c++; // then the count increases by one unit
			    }
			    else { // if the number is odd
				    n = 3 * n + 1;
				    c++; // then the count increases by one unit
			    }
		    }
		    c++; // include the number 1 to the final counter 
		    if (c > cmax) // find the biggest counter 
			    cmax = c; 
	    num1++; // go to the next number
	    }
	    printf ("%d\n", cmax);
    }
    else 
        printf("0\n");
}
