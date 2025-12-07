#include <stdio.h>
#include <string.h>

//ประกาศโปโตไทปฟังก์ชั่น
void explode( char [] , char , char [][10] , int *count ) ;
void all() ;

int main() {
    
    all() ;

    return 0 ;
}

//ฟังก์ชั่นแยกคำ
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

void all() {

    char out[20][10] ;
    char in[50] ;
    char stop ;
    int num ;
    //ฟังก์ชั่นแยกคำ
    printf( "enter string: \n" ) ;
    gets( in ) ;
    explode( in , '/' , out, &num ) ;
    //แสดงคำที่แยก
    printf( "count: %d\n" , num ) ;
    for( int i = 0 ; i < num ; i ++ ) {
        printf( "str%d: %s\n" , i , out[i] ) ;
    }
    
}