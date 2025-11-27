#include <stdio.h>

int calculat( int , int ) ;

int main() {
    int length , wid , area ;
    printf( "input length width \n" ) ;
    while( scanf( "%d %d" , &length , &wid ) != 2 ) {
    printf( "number pls\n" ) ;
    }
    area = calculat( length , wid ) ;
    printf( "---pectangle area peport---\n" ) ;
    printf( "length: %d\n" , length ) ;
    printf( "width: %d\n" , wid ) ;
    printf( "calculated area: %d\n" , area ) ;
    return 0 ;
}

int calculat( int l , int w ) {
    return l * w ;

}
