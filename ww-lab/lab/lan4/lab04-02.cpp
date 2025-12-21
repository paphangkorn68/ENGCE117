#include <stdio.h>

void go( int ***a , int **z ) ;

int main() {
    int **a ;
    int *b = new int ; *b = 10 ;
    int *c = new int ; *c = 20 ;
    go( &a , &b ) ;
    printf( "%d %p %p %p\n" , **a , *a , a , &a ) ;
    printf( "-----------------------------------------------------\n" ) ;
    go( &a , &c ) ;
    printf( "%d %p %p %p\n" , **a , *a , a , &a ) ;
    return 0 ;
}

void go( int ***a , int **z ) {
    *a = z ;
    printf( "%d %p %p %p\n" , ***a , **a , *a , a ) ;
}