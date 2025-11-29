#include <stdio.h>

void cal_sum_duct( int , int , int * , int *) ;

int main(){
    int val_1 , val_2 ;
    int sum , pro ; 
    printf("Enter num1: \n");
    while (scanf("%d", &val_1) != 1) {
        printf("Number pls\n");
    }

    printf("Enter num2: \n");
    while (scanf("%d", &val_2) != 1) {
        printf("Number pls\n");
    }

    cal_sum_duct( val_1 , val_2 , &sum , &pro ) ;

    printf("\n--- calculation report---\n") ;
    printf("input values: A = %d, B =  %d\n" , val_1 , val_2 ) ;
    printf("--------------------------------------------\n") ;
    printf("result sum (A + B): %d\n" , sum ) ;
    printf("result product (A * B): %d\n" , pro ) ;

    return 0 ;
}

void cal_sum_duct( int num1 , int num2 , int *sum_ptr , int *prod_ptr ) {
    *sum_ptr = num1 + num2 ;
    *prod_ptr = num1 * num2 ;
}