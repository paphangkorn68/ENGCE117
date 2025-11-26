#include <stdio.h>
int main() {

    int n , i , r = 2 , c = 4 , sum = 0 , num ;
    int data[r][c] ;
   
    printf( "Enter %d integer number for the 2x4 array\n" , r * c ) ;
    
    for( i = 0 ; i < r ; i++ ) {
        for( n = 0 ; n < c ; n++ ) {
            printf( "Enter element for  Row %d , col %d: " , i , n ) ;
            scanf( "%d" , &data[i][n]) ;
            num = data[i][n] ; 
            sum += num ;
        }
    }
    
    printf( "\n---2D ARRAY SUMMATTION REPORT---\n" ) ;
    printf( "Recorded Matrix (2x4)\n" ) ;

    for( i = 0 ; i < r ; i++ ) {

        for( n = 0 ; n < c ; n++ ) {
            printf( "%d " , data[i][n] ) ;
        }
        printf( "\n" ) ;
    }
    printf( "\nTotal Sum of all elemrts: %d\n" , sum ) ;
    return 0 ;
}