#include <stdio.h>
int main() {

    int n , i ;
    int scores[n] , pass , fail ;

    while( scanf( "%d" , &n ) != 1 ) {
        printf( "number pls\n" ) ;
    }

    for( i = 0 ; i < n ; i++ ) {
        printf( "order: %d \n" , i + 1 ) ;
        while( scanf( "%d" , &scores[i] ) != 1 ) {
        printf( "number pls\n" ) ;
        }
        if ( scores[i] >= 50 ) {
            pass += scores[i] ;
        } else {
            fail++ ; 
        }
    } 

    printf( "---------------------\n" ) ;

    printf( " Passing Scores Sum: %d\n" , pass ) ;
    printf( " Failing Students Count: %d\n" , fail ) ;
    return 0 ;
}