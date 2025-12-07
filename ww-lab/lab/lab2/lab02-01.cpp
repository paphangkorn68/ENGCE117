#include <stdio.h>
#include <string.h>

void revers( char [] , char [] ) ;

int main() {
    
    char text[50] = "I Love You" ;
    char out[50] ;
    revers( text , out ) ;
    printf( "%s\n" , text ) ;
    printf( "%s\n" , out ) ;

    return 0 ;
}

void revers( char text[] , char out[] ) {
    int n , i ;
    n = strlen(text) ;

    for(i = 0 ; i < n ; i++ ) {
        out[n - i - 1] = text[i] ;
    }
}
