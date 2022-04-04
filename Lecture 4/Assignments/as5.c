#include <stdio.h>

int main(){

int days,starting_day,test,test1,i,j,row_count;//Declares days,starting_days,test,test1,i,j,and row_count as integer type variables.

//variables for the program.
test = 0;//used for 1st test of user input
test1 = 0;//used for 2nd test of user input.
i = 1;//used for printing the calendar.
j = 1;//used for printing the space as indicated by starting day.
row_count = 0;//used to print a new line every time row reaches 7 spaces.


while (test < 1){//while loop for checking if user input is between 28-31. while test is less than 1, the loop body repeats.
printf("Enter number of days in month: ");//asks the user to input number of days in month.
scanf("%d", &days);//uses scanf function to receive input and place it into address variable days.

if (days > 31 || days < 28){//if days is greater than 31 or less than 28, the program informs the user their input is not valid and will add 0 to test.

    printf("Error, entered days not valid. Please enter 28-31 for days in month.\n");
    test += 0;

        }

else if (days > 27 && days < 32){//else if days is between 28-31, then the program adds 1 to test so that the program can continue.
    test ++;

}

}

while (test1 < 1){//while loop for checking if user input is between 1-7 for the starting day of the week. while test1 is less than 1, the loop body repeats.

printf("\nEnter the starting day of the week (1= Sun, 7= Sat): ");//asks the user to input the starting day of the week.
scanf("%d",&starting_day);//uses scanf function to receive input and places it at address variable starting_day.

if (starting_day > 7 || starting_day < 1){//if starting day is less than 1 or greater than 7, the program informs the user that their input is not valid and will add 0 to test1 which lets the while loop repeat.

    printf("Error, starting day not valid. Please enter a number from 1-7 for starting day.\n");
    test1 += 0;

        }

else if (starting_day >= 1 && starting_day <= 7){//else if starting_day is between 1-7, the program adds 1 to test1 so it can continue.
    test1 ++;



}

}

while (i <= days){//while i is less than or equal to days,

        while (j < starting_day) {//while j is less than starting_day,the program prints 2 spaces then increments row_count and j by 1.

        printf("   ");
        row_count++;
        j++;
        }

    if (i < 10){//if i is a single digit number, it prints i with one space before and after it then increments i and row_count by 1.
    printf(" %d ",i);
    i++;
    row_count++;
    }

    else if (i > 9){//else if i is a two digit number, it prints i followed by only one space after it, then increments i and row_count by 1.
    printf("%d ",i);
    i++;
    row_count++;
    }

    if (row_count % 7 == 0){//if row_count modulo 7 is equal to 0, meaning that the spaces filling one row is 7, the program prints a new line.
        printf("\n");
    }

}




}


