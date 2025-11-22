// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int N, i;
    
    printf( "enter number\n" ) ;
    while ( scanf("%d", &N) != 1 || N <= 0 ) {
        printf( "Error enter number only \n" ) ;
        while(getchar() != '\n') ;
    }
    for ( i = 0 ; i < N ; i++ ) {
        printf( "Hello Loop!\n" ) ; 
    }
    
    
    // TODO: Implement the for loop to print the message N times

    return 0;
}
