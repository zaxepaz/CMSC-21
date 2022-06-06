#include <stdio.h>
#include <math.h>


/*define a structure line with members float midpoint pointer,slope,distance and nested structure point with members float x and float y where point1 and point2 are variables for the nested structure.*/
struct line{

    float *midpoint;
    float slope;
    float distance;

    struct point{
        float x;
        float y;
    }point1, point2;

};



/*solveSlope function to solve for slope of a line that takes structure line as a parameter to use members from nested structure point to return the needed slope.*/
float solveSlope(struct line line1){
    line1.slope = (line1.point1.y - line1.point2.y)/(line1.point1.x - line1.point2.x);//uses the slope formula with members from nested structure point as variables and sets the quotient as the slope in line1.
    return line1.slope;//returns line1.slope
}


/*solveMidpoint function to solve for midpoint of a line taking structure line as a parameter.*/
void solveMidpoint(struct line line1){

    float midpoint_array[2];//initializes a float array of size 2

    line1.midpoint = midpoint_array;//sets pointer midpoint equal to midpoint_array

    /*uses the midpoint formula with members from nested structure point as variables to solve for the midpoint of x and y. sets index 0 and index 1 of midpoint_array as variables to store midpoints of x and y.*/
    line1.midpoint[0] = (line1.point1.x + line1.point2.x)/2;
    line1.midpoint[1] = (line1.point1.y + line1.point2.y)/2;

    /*prints the midpoint of x and y.*/
    printf("Midpoint: %f %f\n", line1.midpoint[0],line1.midpoint[1]);


}

/*solveDistance function to solve for distance between two points taking structure line as a parameter.*/
float solveDistance (struct line line1){


    /*Uses members from nested structure point to get the square of the difference of x2, x1, and y2 y1 ands stores them in variables distance_X and distance_Y*/
    float distance_X = (line1.point2.x - line1.point1.x)*(line1.point2.x - line1.point1.x);
    float distance_Y = (line1.point2.y - line1.point1.y)*(line1.point2.y - line1.point1.y);


    /*Uses sqrt function on the sum of distance_X and distance_Y to get the final value of the distance formula*/
    return sqrt(distance_X + distance_Y);
}


/*getSlopeInterceptForm function to get the slope intercept form between two points taking structure line as a parameter.*/
void getSlopeInterceptForm(struct line line1){

    /*declares float variable b and uses formula for solving b to obtain a value for the variable b.*/
    float b = line1.point1.y - (solveSlope(line1)*line1.point1.x);

    /*using solveSlope function, if the slope is not equal to zero and b is greater than 0, the function prints the normal slope intercept form*/
    if (solveSlope(line1) != 0 && b > 0){
    printf("y = %fx + %f", solveSlope(line1),b);
}
    /*using solveSlope function, if the slope is not equal to zero and b is less than 0, the function prints the slope intercept form but b is multiplied by -1 and the sign for the equation is changed to -*/
    else if (solveSlope(line1) != 0 && b < 0){
    printf("y = %fx - %f", solveSlope(line1),b*-1);
    }

    /*using the solveSlope function, if the slope is equal to 0, the function prints y = b only and not y = mx + b, since multiplying 0 to x will just result in 0 + b.*/
    else if(solveSlope(line1)== 0){
        printf("y = %f",b);
    }
}
int main(){

    /*declares structure line with variable line1.*/
    struct line line1;

    /*asks the user to input values for x and y for points 1 and 2.
    Using scanf,stores the values of x and y for point1 at line1.point1.x and line1.point1.y and stores the values of x and y for point2 at line1.point2.x and line1.point2.y*/
    printf("Enter x and y for point1: ");
    scanf("%f %f",&line1.point1.x, &line1.point1.y);
    printf("Enter x and y for line2: ");
    scanf("%f %f",&line1.point2.x, &line1.point2.y);


    /*uses struct line1 as parameter for solveSlope and solveDistance and stores it at float variables slope and dist respectively.*/
    float slope = solveSlope(line1);
    float dist = solveDistance(line1);


    /*print slope, midpoint, distance, slope-intercept form of two points.*/
    printf("Slope: %f\n", slope);
    solveMidpoint(line1);
    printf("Distance between 2 points: %f\n",dist);
    getSlopeInterceptForm(line1);


}









