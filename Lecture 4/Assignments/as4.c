#include <stdio.h>

int main(){

int exponent,i,base;//Declares variables exponent, i, and base as integer types.

printf("Please enter an exponent of 2.\n");//Asks the user to enter an exponent of 2.
scanf("%i",&exponent);//Uses scanf function to receive input from the user and places it at address variable exponent.


i = 1;//i is equal to 1.
base = 1;//base is equal to 1.

if (exponent == 0){//if user inputs 0 as exponent input, program uses this if statement to print 2 raised to zero is equal to 1.

    printf("2 raised to 0 is equal to 1.\n");

}

else if (exponent > 0){//else if the user inputs anything greater than 0, the program continues,

    while (i <= exponent){//while i is less than or equal to exponent, the while loop performs the loop body. The while loop is created in a way that base = 1 is multiplied by 2 everytime i increases until it is equal to exponent.

            base *= 2;
            i++;
    }

    printf("2 raised to %i is equal to %i.\n", exponent,base);//After the while loop, the program outputs the final result of 2 raised to what the user inputted as the exponent of 2.

  }



}























