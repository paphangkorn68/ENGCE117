#include <stdio.h>
int main() {

    int n = 7 , i ;
    int tem[n] , tm = 0 ;

    for( i = 0 ; i < 7 ; i++ ) {
        printf( "Day: %d \n" , i + 1 ) ;
        while( scanf( "%d" , &tem[i] ) != 1 ) {
        printf( "number pls\n" ) ;
        }
        if ( tm <= tem[i] ) {
            tm = tem[i] ;
        } 
        
    }
    
    printf( "---DAILY TEMPERATURE REPORT---\n" ) ;
    printf( "REcorded Temperatures(C): %d %d %d %d %d %d %d \n" , tem[0] , tem[1] , tem[2] , tem[3] , tem[4] , tem[5] , tem[6] ) ;
    printf( "Maximum Temperature Found: %d C\n" , tm ) ;
    if( tm >= 35 ) {
        printf( "Weather is HOT!\n" ) ;
    }else {
            printf( "Weather is MODERATE!\n" ) ;
        }
    return 0 ;
}