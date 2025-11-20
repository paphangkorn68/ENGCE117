#include <stdio.h>

int main() {
    int number = 1 ;
    int evenSum = 0 ;
    int oddSum = 0 ;



    while( number != 0 ) {
        
        if ( scanf( "%d" , &number ) != 1) {
            break ; 
        } else if ( number % 2 == 0 ) {
            evenSum += number ;
        }else{
            oddSum += number ;
        }
        
    }

    printf( "Even Sum: %d\n" , evenSum ) ;
    printf( "Odd Sum: %d\n" , oddSum ) ;
    return 0 ;
}