#include <stdio.h> 

void getset( int ** , int * ) ;

int main() {

    int *data , num ;
    getset( &data , &num ) ;
    return 0 ;
}

void getset( int **a , int *num ) {
    int n ;
    scanf( "%d", &n ) ;
    *a = new int[n] ;
    printf( "enter number \n" ) ;
    for( int i = 0 ; i < n ; i++ ) {
        while ( scanf("%d", &(*a)[i]) != 1 ) {
        printf( "Error enter number only \n" ) ;
        while(getchar() != '\n') ;
        }
    }
    printf( "--------------- \n" ) ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%d" , (*a)[i] ) ;
    }
}
