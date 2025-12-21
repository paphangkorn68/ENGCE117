#include <stdio.h>

struct studen {
    int age ;
    char name[20] ;
    char sex ;
    float gpa ; 

} ;

struct studen data[10][10] ;
struct studen ( *getstuden( int *room ) )[10] ;

int main() {
    struct studen ( *chilldren )[10] ;
    int group ;

    printf( "num studen: " ) ;
    scanf( "%d" , &group ) ;
    chilldren = getstuden( &group ) ;

    for( int i = 0 ; i < group ; i++ ) {
        for( int j = 0 ; j < 10 ; j++ ) {
            printf( "gpa cill %d : %.2f \n" , i + 1 , chilldren[i][j].gpa ) ;
        }
        printf( "\n" ) ;
    }  

    return 0 ;
}

struct studen ( *getstuden( int *room ) )[10] {
    int i , j ; 
    for( i = 0 ; i < *room ; i++ ) {
        for( j = 0 ; j < 10 ; j++ ) {
            printf( "num studen %d: " , j + 1 ) ;
            scanf( "%f" , &data[i][j].gpa ) ;
        }
        printf( "\n" ) ;
    }
    return data ;
}
