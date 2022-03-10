
#include <stdio.h>/*includes stdio.h file program into the code so that
					information for input and output functions can be used.*/

int main(void){//indicates the function will return an integer value.

	int i;//declares variable i of type int.
	float x;//declares variable f of type int.

	i = 40;//assigns 40 to variable i.
	x = 839.21f;//assigns 839.21 as a float to variable x.


	printf("|%d|%5d|%-5d|%5.3d|\n", i,i,i,i);/*the characters in the format string are copied to the output line and the 
											four conversion specifications are replaced by i,i,i,i in order. The character "|" is only used to show
											how much space each value will have. 

											"%d" displays i in decimal form with no spaces. "%5d" displays i with 
											with a minimum of 5 characters Since i requires 2 characters to print, there will be 3 spaces before i.

											"%-5d"displays i with a minimum of 5 characters. Since i does not have 5 characters, 3 spaces will be added after i to meet 
											the 5 minimum character requirement.

											"%5.3d" displays i with a minimum of 5 characters and a minimum of 3 digits. Since i only has 2 digits, 0 will be added before
											i so that it will meet the 3 digit requirement. Afterwards, 2 spaces will be added before i so that  the 5 character requirement will be met.*/

	printf("|%10.3f|%10.3e|%-10g|\n", x,x,x);/*the characters in the format string are copied to the output line and the 
											four conversion specifications are replaced by x,x,x in order. The character "|" is only used to show
											how much space each value will have. 

											"%10.3" displays x in decimal form with a total pf 10 characters and 3 digits after the decimal point. 0 will be added after
											x to reach 3 digits after the decimal point. Afterwards, 3 spaces will come before x to meet the 10 character requirement.

											"%10.3e" displays x in exponential form with a total of 10 characters and 3 digits after the decimal point. Including the exponential form with x,
											the output reaches 9 characters so only 1 spaces will be added before x.


											"%-10g" displays x in either decimal or exponential form with a total of 10 characters. With "-" added, it forces the output to have left justification
											and so the required amount of spaces will be printed after x, including the decimal, in order to reach the total 10 character requirement. In this case, 
											x will be displayed in decimal form so 4 spaces were printed after x to reach 10 characters*/



	return 0;//Returns 0 if the program has no errors.
}