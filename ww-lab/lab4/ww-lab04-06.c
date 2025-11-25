#include <stdio.h>
int main() {

    int n = 5 , i ;
    int scores[n] , ttsum = 0 , pass ;
    float average = 0.0 ;

    for( i = 0 ; i < 5 ; i++ ) {
        printf( "Number: %d \n" , i + 1 ) ;
        while( scanf( "%d" , &scores[i] ) != 1 ) {
        printf( "number pls\n" ) ;
        }

        ttsum += scores[i] ; 
        
    }
    average = ttsum / 5 ;
    for( i = 0 ; i < 5 ; i++ ) {
        if( scores[i] > average ) {
            pass++ ;
        }
    }
    printf( "\n----------------\n" ) ;
    printf( "REcorded Scores: %d %d %d %d %d \n" , scores[0] , scores[1] , scores[2] , scores[3] , scores[4] ) ;
    printf( "Total sum: %d \n" , ttsum ) ;
    printf( "Average Score: %.2f \n" , average ) ;
    printf( "Number of Scores Above Average: %d \n" , pass ) ;
    
    return 0 ;
}