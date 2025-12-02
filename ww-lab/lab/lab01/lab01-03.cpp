#include <stdio.h> 

int *getset( int * ) ;

int main() {

    int *data , num ;
    data = getset( &num ) ;
    delete [] data ;
    return 0 ;
}

int *getset( int *num ) {
    int n , *a ;
    scanf( "%d", &n ) ;
    a = new int[n] ;
    printf( "enter number \n" ) ;
    for( int i = 0 ; i < n ; i++ ) {
        while ( scanf("%d", &a[i]) != 1 ) {
        printf( "Error enter number only \n" ) ;
        while(getchar() != '\n') ;
        }
        
    }
    printf( "--------------- \n" ) ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%d " , a[i] ) ;
    }
    
}
