#include <stdio.h>
int main() {

    int n , i ;
    int number[n] , svalue = 0 , ttnumcount , countsv ;
    

    while( scanf( "%d" , &n ) != 1 || n > 10 || n <= 0 ) {
    printf( "number 1 - 10 pls\n" ) ;
    }

    for( i = 0 ; i < n ; i++ ) {

        printf( "Number: %d \n" , i + 1 ) ;
        while( scanf( "%d" , &number[i] ) != 1 ) {
        printf( "number pls\n" ) ;
        } 

        ttnumcount++ ;

    }

    while( scanf( "%d" , &svalue ) != 1 ) {
    printf( "number pls\n" ) ;
    }
    
    for( i = 0 ; i < n ; i++ ) {

        if( svalue == number[i] ) {
            countsv++ ;
        }

    }
    printf( "\n---FREQUENCY ANALYSIS REPORT---\n" ) ;
    printf( "Total elements recorded(N): %d \n" , ttnumcount ) ;
    printf( "REcorded Numbers:") ;
    for( i = 0 ; i < n ; i++ ) {
        printf( " %d" , number[i] ) ;
    }
    printf( "\n") ;
    printf( "Search Value: %d \n" , svalue ) ;
    printf( "Frequency Count: %d \n" , countsv ) ;
    
    return 0 ;
}