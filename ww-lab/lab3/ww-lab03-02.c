#include <stdio.h>

struct studen {
    char name[50] ; 
    int studentID ;
    float scopre ;
} ;

int main() {

    int n , i ;

    while ( scanf("%d" , &n ) != 1 ) {
        printf( "enter score only stard 1 agane \n" ) ;
        while(getchar() != '\n') ;
    }

    struct studen studens[n] ;

    for( i = 0 ; i < n ; i++ ) {
        if ( scanf( "%d %f %s" , &studens[i].studentID , &studens[i].scopre , studens[i].name ) != 3 ) {
            return 1 ;
        }
        printf( "studentID : %d," , studens[i].studentID ) ;
        printf( "scopre : %.2f," , studens[i].scopre ) ;
        printf( "name : %s\n" , studens[i].name ) ;
    }
    return 0 ;
}