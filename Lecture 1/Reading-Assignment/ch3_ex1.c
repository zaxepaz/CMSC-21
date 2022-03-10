
#include <stdio.h> /*includes stdio.h file program into the code so that
					information for input and output functions can be used.*/

int main(){ //indicates the function will return an integer value.

	int i, j; //declares variables i and j of type int.
	float x, y; //declares variables x and y of type float.

	i = 10; //assigns value 10 to i.
	j = 20; //assigns value 20 to j.
	x = 43.2892f; //assigns value 43.2892 as a float to x.
	y = 5527.0f; //assigns value 5527.0 as a float to x.

	printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);/*the characters in the format string are copied to the output line and the four conversion specification are replaced by i,j,x,y in order. The conversion specifications 
														     include %d and %f. %d indicates printf to convert from an int value and print as a decimal while %f indicates printf
														     to print a float value. Final result should be i = 10, j = 20, x = 43.289200, y = 5527.000000*/


	

	return 0;//Returns 0 if the program has no errors.
}