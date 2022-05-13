#include <stdio.h>

#define ROW_NETWORK 9 //use macro to define length of row of the array as 9.
#define COLUMN_NETWORK 9 //use macro to define length of column of the array as 9.


int main(){

int location; //declares location variable as integer type.

char road_networks[ROW_NETWORK][COLUMN_NETWORK] = //declares and initializes character array to display the adjacent matrix and uses ROW_NETWORK and COLUMN_NETWORK for its row and column lengths.
                {{' ','A','B','C','D','E','F','G','H'},
                 {'A','1','1','0','0','0','1','0','0'},
                 {'B','1','1','1','0','0','0','0','0'},
                 {'C','0','1','1','0','1','1','0','0'},
                 {'D','0','0','0','1','1','0','0','0'},
                 {'E','0','0','0','1','1','0','0','0'},
                 {'F','1','0','1','0','0','1','0','0'},
                 {'G','1','0','0','1','0','0','1','0'},
                 {'H','0','0','0','0','0','1','0','1'},
                };


for (int i = 0; i < ROW_NETWORK; i++){//outer loop to focus on each row of the array.

    for (int j = 0; j < COLUMN_NETWORK; j++){//inner loop to print each element in the current row.

        if (road_networks[i][j]== 'C' || road_networks[i][j]== 'D' ){//if character is equal to C or D, the program will print these encased in brackets.
            printf("   [%c]", road_networks[i][j]);
        }

        else{
        printf("    %c ", road_networks[i][j]);
        }
    }

    printf("\n");
}



    printf("Which point are you located?  0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");//asks the user to input the point where they are located in.
    scanf("%d",&location);//places user input into address variable location.

    switch (location){//uses switch statement on location.


    case 0://if user inputs 0,
        printf("At point: A\n");

        for (int j = 0; j < COLUMN_NETWORK-1; j++){//uses a for loop to check every element in a specific row in the array.

            if (road_networks[location+1][j] == '0'){//the row of the array is based on the number inputted by the user for location. If element is equal to '0', tbe program continues.
                    continue;
            }

            else if (road_networks[location+1][j] == '1' && j == 2){//if road_networks[location+1][j] is equal to '1' and j = 2, this means the user can move to B (since column B has all values 2 for j in [location][j]) then to charging station C.
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 3){//if road_networks[location+1][j] is equal to '1' and j = 3, the user can directly move to charging station C (since column C has all values 3 for j in [location][j])
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 4){//if road_networks[location+1][j] is equal to '1' and j = 4, the user can directly move to charging station D (since column D has all values 4 for j in [location][j])
                    printf("point: D arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 5){//if road_networks[location+1][j] is equal to '1' and j = 5, this means the user can move to D (since column E has all values 5 for j in [location][j]) since E is beside D.
                    printf("point: D arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 6){//if road_networks[location+1][j] is equal to '1' and j = 6, this means the user can move to A (since F can path to A, and column F has all values 6 for j in [location][j]) then to B then to charging station C.
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 7){//if road_networks[location+1][j] is equal to '1' and j = 7, this means the user can move to A (since G can path to A, and column G has all values 7 for j in [location][j]) then to B then to charging station C.
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 8){//if road_networks[location+1][j] is equal to '1' and j = 8, this means the user can move to F (since H can path to F, and column H has all values 8 for j in [location][j]) then to A, then to B, then to charging station C.
                    printf("point: C arrived to charging station.");
                    break;
            }
        }
        break;

    case 1:
        printf("At point: B\n");//If user types in 1, since B is beside charging station C, we can directly move to C.

        printf("point: C arrived to charging station.");
        break;

    case 2: //Since C is a charging station, the program just prints the user is at a charging station C.
        printf("point: C is a charging station");
        break;

    case 3: //Since D is a charging station, the program just prints the user is at a charging station D.
        printf("point: D is a charging station");
        break;


    /*Case 4 to Case 7 follow same coding as Case 2.*/
    case 4:
        printf("At point: E\n");

        for (int j = 0; j < COLUMN_NETWORK; j++){


            if (road_networks[location+1][j] == '0'){
                    continue;
            }

            else if (road_networks[location+1][j] == '1' && j == 1){//if road_networks[location+1][j] is equal to '1' and j = 1, this means the user can move to A (since column A has all values 1 for j in [location][j]) then to B, then to charging station C.
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 2){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 3){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 4){
                    printf("point: D arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 5){
                    printf("point: D arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 6){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 7){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 8){
                    printf("point: C arrived to charging station.");
                    break;
            }
        }

        break;

    case 5:

        printf("At point: F\n");
        for (int j = 0; j < COLUMN_NETWORK; j++){


            if (road_networks[location+1][j] == '0'){
                    continue;
            }

            else if (road_networks[location+1][j] == '1' && j == 1){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 2){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 3){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 4){
                    printf("point: D arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 5){
                    printf("point: D arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 6){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 7){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 8){
                    printf("point: C arrived to charging station.");
                    break;
            }
        }
        break;

    case 6:
        printf("At point: G\n");

        for (int j = 0; j < COLUMN_NETWORK; j++){


            if (road_networks[location+1][j] == '0'){
                    continue;
            }

            else if (road_networks[location+1][j] == '1' && j == 1){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 2){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 3){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 4){
                    printf("point: D arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 5){
                    printf("point: D arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 6){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 7){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 8){
                    printf("point: C arrived to charging station.");
                    break;
            }

        }
        break;

    case 7:
        printf("At point: H\n");

        for (int j = 0; j < COLUMN_NETWORK; j++){

        if (road_networks[location+1][j] == '0'){
                    continue;
            }

            else if (road_networks[location+1][j] == '1' && j == 1){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 2){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 3){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 4){
                    printf("point: D arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 5){
                    printf("point: D arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 6){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 7){
                    printf("point: C arrived to charging station.");
                    break;
            }

            else if (road_networks[location+1][j] == '1' && j == 8){
                    printf("point: C arrived to charging station.");
                    break;
            }
        }
    }
return 0;

}
















