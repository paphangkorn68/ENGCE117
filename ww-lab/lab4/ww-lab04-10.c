#include <stdio.h>
int main() {

    int n , i , r = 3 , c = 3 ;
    int data[r][c] ;
   
    printf( "Enter %d integer number for the 3x3 array\n" , r * c ) ;
    
    for( i = 0 ; i < r ; i++ ) {
        for( n = 0 ; n < c ; n++ ) {
            printf( "Enter element for  Row %d , col %d: " , i , n ) ;
            scanf( "%d" , &data[i][n]) ;
        }
    }
    
    printf( "\n---TWO-DIMENSIONAL ARRAY REPORT---\n" ) ;
    printf( "Array Size: %d Row x %d Columns\n" , r , c ) ;
    printf( "Content (Table Format):\n") ;

    for( i = 0 ; i < r ; i++ ) {

        for( n = 0 ; n < c ; n++ ) {
            printf( "%d " , data[i][n] ) ;
        }
        printf( "\n" ) ;
    }
    return 0 ;
}