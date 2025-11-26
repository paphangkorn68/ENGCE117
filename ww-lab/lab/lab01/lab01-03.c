#include <stdio.h> 
void *getset( int * ) ;
int main() {
    int *data , num ;
    data = getset( &num ) ;
    return 0 ;
}

void *getset( int *num ) {
    int a[10] ;
    printf( "enter number \n" ) ;
    for( int i = 0 ; i < 10 ; i++) {
        scanf( "%d" , num ) ;
        a[i] = *num ;
    }
    printf( "-----------------\n" ) ;
    for( int i = 0 ; i < 10 ; i++) {
        printf( "%d\n" , a[i] ) ;
    }
   

}