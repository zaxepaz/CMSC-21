
#include <stdio.h>
int main(void){

int row, column = 0;
int size = 0 ;
char cont = 'y';

while(cont == 'y'){

printf("Enter square size:");
scanf("%d", &size);


for( row = 0 ;row < size ; row++){

    for(column = 0 ; column < size;column++){

    if (row == 0 || row == size-1|| column == 0|| column == size-1){
    printf("*");
    }

    else{
    printf(" ");
    }

    }
    printf("\n");

}
    printf("Print another square? Enter y or n: ");
    scanf("%c",&cont);

    if (cont == 'n'){
     break;
    }

    else if (cont != 'y' || cont != 'n' ){
    printf("Not a valid choice. \n");

    printf("Print another square? Enter y/n: ");
    scanf("%c",&cont);
    }
}

return 0;

}
