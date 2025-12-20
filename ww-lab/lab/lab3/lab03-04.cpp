#include <stdio.h>

struct studen {
    int age ;
    char name[20] ;
    char sex ;
    float gpa ; 

} ;

void upgrade( struct studen[][10]  , int * ) ;

int main() {
    struct studen boy[20][10] ;
    int groupe ;
    upgrade( boy , &groupe ) ;

    return 0 ;
}

void upgrade( struct studen boy[][10] , int *room ) {
    int i , j ;
    printf( " enter num room \n " ) ;
    scanf( "%d" , room ) ;
    for( i = 0 ; i < *room ; i++ ) {
        for( j = 0 ; j < 10 ; j++ ) {
            boy[i][j].gpa = 3 ;
        }
    }
    for( i = 0 ; i < *room ; i++ ) {
        for( j = 0 ; j < 10 ; j++ ) {
            printf( "%.2f " , boy[i][j].gpa ) ;
        }
        printf( "\n" ) ;
    }

}