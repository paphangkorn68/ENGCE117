#include <stdio.h>

void getmatrix( int ** , int * , int * ) ;

int main() {
    int *data , row , i , col ;

    printf( "row\n" ) ;
    while ( scanf( "%d" , &row ) != 1 ) {
        printf( "1 more \n" ) ;
    }

    printf( "col\n" ) ;
    while ( scanf( "%d" , &col ) != 1 ) {
        printf( "1 more \n" ) ;
    }

    getmatrix( &data , &row , &col ) ;

    printf("matrix report\n");
    for (int i = 0; i < row ; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", data[i * col + j]);
        }
        printf("\n");
    }


    return 0 ;
}

void getmatrix( int **arr , int *row , int *col ) {
    int sum , i = 0 , j ;
    *arr = new int[ *row * *col ] ;
    for( i = 0 ; i < *row ; i++ ) {
        for( j = 0 ; j < *col ; j++ ) {
            printf( "enter value arr[%d][%d]\n" , i , j ) ;
            while ( scanf( "%d" , &(*arr)[ i * (*col) + j] ) != 1 ) {
            printf( "1 more \n" ) ;
            }

        }
        
    }
    
}