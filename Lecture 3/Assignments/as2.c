#include <stdio.h>

int main(){

    int tenth, ones;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d",&tenth, &ones);

    /*Used if statement if first digit user enters is 1. This is for numbers 10-19 which require special treatment.*/
    if (tenth == 1){

        /*Used switch statement for 10-19 to then print into its respective word form.*/
        switch(ones){

        case 0 :
            printf("Number entered in words: Ten");
            break;

        case 1 :
            printf("Number entered in words: Eleven");
            break;

        case 2 :
            printf("Number entered in words: Twelve");
            break;

        case 3 :
            printf("Number entered in words: Thirteen");
            break;

        case 4 :
            printf("Number entered in words: Fourteen");
            break;

        case 5 :
            printf("Number entered in words: Fifteen");
            break;

        case 6 :
            printf("Number entered in words: Sixteen");
            break;

        case 7 :
            printf("Number entered in words: Seventeen");
            break;

        case 8 :
            printf("Number entered in words: Eighteen");
            break;

        case 9 :
            printf("Number entered in words: Nineteen");
            break;

        }

    }

    /*Else statement for when the first digit is not 1. This means the number has a range from 20-99, which generally follows a structured
    word format*/
    else {

        /*First switch statement used based on the first digit of user input.*/
        switch (tenth){

        case 2 :
            printf("Number entered in words: Twenty");
            break;

        case 3 :
            printf("Number entered in words: Thirty");
            break;

        case 4 :
            printf("Number entered in words: Fourty");
            break;

        case 5 :
            printf("Number entered in words: Fifty");
            break;

        case 6 :
            printf("Number entered in words: Sixty");
            break;

        case 7 :
            printf("Number entered in words: Seventy");
            break;

        case 8 :
            printf("Number entered in words: Eighty");
            break;

        case 9 :
            printf("Number entered in words: Ninety");
            break;

        }

        /*Second switch statement used for second digit of user input*/
        switch (ones){

        case 0 :
            printf(" ");
            break;

        case 1 :
            printf("-one");
            break;

        case 2 :
            printf("-two");
            break;

        case 3 :
            printf("-three");
            break;

        case 4 :
            printf("-four");
            break;

        case 5 :
            printf("-five");
            break;

        case 6 :
            printf("-six");
            break;

        case 7 :
            printf("-seven");
            break;

        case 8 :
            printf("-eight");
            break;

        case 9 :
            printf("-nine");
            break;

        }
    }


}



