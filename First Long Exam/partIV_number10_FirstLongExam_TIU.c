#include <stdio.h>
#include <math.h>

int main(){

/*declares variables x,y,formula,and check as float types and counter as integer variable.*/
float x,y,formula,check;
int counter;


/*informs user of program information and asks the user to enter a number for square root approximation. Uses scanf and places input at variable x.*/
printf("This program allows you to approximate a square root of a number.\n");
printf("Enter a number: ");
scanf("%f",&x);

/*y is initially set to 1, it is the initial guess.
Counter is used for the while loop. It is set to 0*/
y = 1;
counter = 0;


/*while loop for square root approximation*/
while (counter < 1){

    /*Iterative method formula and variable check to see if formula - y is less than or equal to tolerance.*/
    formula = 0.5*(y + (x/y));
    check = formula - y;

    /*if absolute value of check is less than or equal to tolerance value, then the program will print the last value of y as %0.5f and will add 1 to counter which will break the while loop.*/
    if (fabs(check) <= 0.000001f){

        printf("Approximate square root of %.5f is %.5f\n",x,y);
        counter += 1;

      }

    /*else program will just continue, assigning formula as the new y for the next iteration of the while loop.*/
    else{

      y = formula;

    }


}


}
