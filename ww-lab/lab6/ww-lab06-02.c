#include <stdio.h>

void swap( int * , int *) ;

int main(){
    int num1 , num2 ;
    printf("Enter num1: \n");
    while (scanf("%d", &num1) != 1) {
        printf("Number pls\n");
    }

    printf("Enter num2: \n");
    while (scanf("%d", &num2) != 1) {
        printf("Number pls\n");
    }

    printf("--- pointer modification report---\n") ;
    printf("1. value before swap num1: %d num2: %d\n" , num1 , num2 ) ;
    swap( &num1 , &num2 ) ;
    printf("2. value after swap num1: %d num2: %d\n" , num1 , num2 ) ;

    return 0 ;
}

void swap( int *a , int *b ) {
    *a = *a + *b ;
    *b = *a - *b ;
    *a = *a - *b ;
}