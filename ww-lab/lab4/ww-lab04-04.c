#include <stdio.h>
int main() {

    int n = 5 , i ;
    int num[n] , one = 0 , to ;

    for( i = 0 ; i < 5 ; i++ ) {
        printf( "Number: %d \n" , i + 1 ) ;
        while( scanf( "%d" , &num[i] ) != 1 ) {
        printf( "number pls\n" ) ;
        }

        if ( num[i] % 2 == 0 ) {
            to++ ;
        } else {
            one++ ;
        }
        
    }
    
    printf( "\n---NUMBER CLASSIFICATION REPORT---\n" ) ;
    printf( "REcorded Numbers: %d %d %d %d %d \n" , num[0] , num[1] , num[2] , num[3] , num[4] ) ;
    printf( "Total Even Number Found: %d \n" , to ) ;
    printf( "Total Odd Number Found: %d \n" , one ) ;
    return 0 ;
}