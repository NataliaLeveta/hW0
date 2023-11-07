#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){ 
    int num1 = atoi(argv[1]);  //
    int num2 = atoi(argv[2]); 
	int sum, sumax = 0;
	long long n;
    if(num1 >= 1 && num1 <= 100000000 && num2 >= 1 && num2 <= 100000000 && num1 < num2 && argc ==3){
	    while (num1 <= num2){
		    n = num1;
		    sum = 0;
		    while (n>1){
			    if (n%2 == 0){
				    n = n/2;
				    sum++;
			    }
			    else {
				    n = 3 * n + 1;
				    sum++;
			    }
		    }
		    sum++;
		    if (sum > sumax)
			    sumax = sum;
	    num1++;
	    }
	    printf ("%d\n", sumax);
    }
    else 
        printf("0\n");
}

