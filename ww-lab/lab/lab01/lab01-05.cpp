#include <stdio.h>

void getmatrix( int ** , int , int * , int * ) ;

int main() {
    int *data , row = 3 , n = 3 , i , col = 3 ;
    getmatrix( &data , n , &row , &col ) ;

    printf("matrix report\n");
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", data[i * col + j]);
        }
        printf("\n");
    }


    return 0 ;
}

void getmatrix( int **arr , int n , int *row , int *col ) {
    int sum , i = 0 , j , b ;
    b = *row * *col ;
    *arr = new int[ *row * *col ] ;
    for( int i = 0 ; i < n ; i++ ) {
        for( j = 0 ; j < n ; j++ ) {
            printf( "enter value arr[%d][%d]\n" , i , j ) ;
            while ( scanf( "%d" , &(*arr)[ i * (*col) + j] ) != 1 ) {
            printf( "1 more \n" ) ;
            }

        }
        
    }
    
}