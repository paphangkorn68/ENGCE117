#include <stdio.h>
int main() {

    int n , i ;

    while( scanf( "%d" , &n ) != 1 ) {
        printf( "number pls\n" ) ;
    }

    int scores[n] ;

    for( i = 0 ; i < n ; i++ ) {
        printf( "order: %d \n" , i + 1 ) ;
        while( scanf( "%d" , &scores[i] ) != 1 ) {
        printf( "number pls\n" ) ;
        }
    } 

    printf( "---------------------\n" ) ;

    for( i = n - 1 ; i >= 0 ; i-- ) {
        printf( "%d\n" , scores[i] ) ;
    }
    return 0 ;
}
