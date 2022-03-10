
#include <stdio.h> /*includes stdio.h file program into the code so that
					information for input and output functions can be used.*/

int main(void){ //indicates the function will return an integer value and will not receive any information.

	int num1, denom1, num2, denom2, result_num, result_denom; //declares variables num1, denom1, num2, denom2, result_num, result_denom of type int.



	printf("Enter first fraction: "); //prints "Enter first fraction: " to inform user to enter a fraction.
	scanf("%d/%d", &num1,&denom1);/*uses scanf function to recieve input from the user in the format of a/b. %d is used to convert input into decimals. 
	                               &num1 is used to store a in a/b at num1 variable while &denom1 is used to store b in a/b at denom1 variable*/

	printf("Enter second fraction: "); //prints "Enter second fraction: " to inform user to enter a second fraction.
	scanf("%d/%d", &num2,&denom2);/*uses scanf function to recieve input from the user in the format of c/d. %d is used to convert input into decimals. 
	                               &num2 is used to store c in c/d at num2 variable while &denom2 is used to store d in c/d at denom2 variable.*/

	result_num = num1 * denom2 + num2 * denom1;//computes for the sum of the products of num1 and denom2, and num2 and denom1. the value is then stored at result_num

	result_denom = denom1 * denom2;//computes for the product of denom1 and denom2. the value is then stored at result_denom.

	printf("The sum is %d/%d\n",result_num, result_denom);/*prints the sum of the two fractions the user entered using the two scanf functions previously.
	                                                        %d is used to convert output into decimals. result_num and result_denom are printed in the format of 
	                                                        result_num/result_denom.*/


	return 0;//Returns 0 if the program has no errors.
}