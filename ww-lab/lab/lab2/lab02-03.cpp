#include <stdio.h>
#include <string.h>

//ประกาศโปโตไทปฟังก์ชั่น
void explode( char [] , char , char [][10] , int *count ) ;

int main() {
    char out[20][10] ;
    int num ;

    explode( "I/Love/You" , '/' , out, &num ) ;
    printf( "count: %d\n" , num ) ;
    for( int i = 0 ; i < num ; i ++ ) {
        printf( "str%d: %s\n" , i , out[i] ) ;
    }
    
    return 0 ;
}


void explode( char text[] , char slat , char out[][10] , int *count ) {
    int n = 0 , i = 0 , j = 0 ;
    *count = 0 ;
    
    while( text[i] != '\0' ) {
        if( text[i] != slat ) {
            out[n][j] = text[i] ;
            j++ ;
        } else {
            out[n][j] = '\0' ;
            n++ ;
            j = 0 ;
        }
        i++ ;
    }
    out[n][j] = '\0' ;
    *count = n + 1 ;
    
}