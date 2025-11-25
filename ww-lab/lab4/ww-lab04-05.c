#include <stdio.h>
int main() {

    int n = 6 , i ;
    int num[n] , sum = 0 ;

    for( i = 0 ; i < 6 ; i++ ) {
        printf( "Number: %d \n" , i + 1 ) ;
        while( scanf( "%d" , &num[i] ) != 1 ) {
        printf( "number pls\n" ) ;
        }

        sum += num[i] ; 
        
    }
    
    printf( "\n---NUMBER CLASSIFICATION REPORT---\n" ) ;
    printf( "REcorded Numbers: %d %d %d %d %d %d\n" , num[0] , num[1] , num[2] , num[3] , num[4] , num[5] ) ;
    printf( "Total Sum of Number: %d \n" , sum ) ;
    
    return 0 ;
}