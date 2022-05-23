#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>


void scan_word(int occurences[26]){//scan_word function

    char c;//declares c as char type

    /*uses while loop to obtain every character from user input, then check if character is in alphabet.
    If character is in alphabet, it gets the index value of the given letter in the ocurrences array and increments it by 1.*/
    while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            occurences[toupper(c) - 'A']++;
        }
    }
}


bool is_anagram(int occurences1[26], int occurences2[26]){//is_anagram to compare occurences1 and occurences2 array from scan_word function.

    int i,sum1 = 0,sum2 = 0;//declares i,sum1,sum2 as integer type variables.


    /*for loop to check every element in occurence1 and occurence2. If element at occurences1[i] is the same in occurences2[i],both elements are set to 0.*/
    for (i=0; i<26; i++){

        if (occurences1[i] == occurences2[i]){
            occurences1[i] = 0;
            occurences2[i] = 0;
        }
    }

    /*after the previous for loop, this for loop is for taking the sum of both occurences arrays to check if the sum of both arrays are 0 or not.
    If the sum is equal to zero, that means there were elements that were set to 0 in both arrays meaning that the user input for the two words are anagrams.
    Otherwise, they aren't*/
    for (i = 0; i < 26; i++){
        sum1 += occurences1[i];
        sum2 += occurences2[i];
    }


    /*returns 1 if sum of both arrays is 0 and returns 0 if sum of both arrays is greater than 0*/
    if (sum1 + sum2 == 0){
        return 1;
    }

    else if(sum1 + sum2 > 0){
        return 0;
    }
}



int main(void) {

    /*declares i, j, final_answer, occurences1, and occurences2 as integer type variables and arrays.*/
    int i,j,final_answer,occurences1[26] = {0},occurences2[26] = {0};


    char c;//declares c as char type variable.


    /*Asks user to input first word and uses scan_word function to receive input and modify occurences1 array.*/
    printf("Enter first word: ");
    scan_word(occurences1);

    /*Asks user to input second word and uses scan_word function to receive input and modify occurences2 array.*/
    printf("Enter second word: ");
    scan_word(occurences2);

    /*uses variable final_answer to receive value from is_anagram function.*/
    final_answer = is_anagram(occurences1,occurences2);


    /*if final_answer is True, then the program prints that it is an anagram, otherwise, it prints it is not an anagram.*/
    if (final_answer){
        printf("\nAnagram.");
    }

    else {
        printf("\nNot an anagram.");
    }

    return 0;
}
