#include <stdio.h>

int main() {
    int Number , sum = 0 , i ;
    if ( scanf( "%d" , &Number ) != 1 ) {
        return 1 ;
    }
    for( i = 0 ; i <= Number ; i++ ) {
        sum += i ;
    }


    printf( "%d\n" , sum ) ;
    return 0 ;
}