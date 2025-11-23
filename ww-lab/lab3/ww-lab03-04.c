#include <stdio.h>

struct studen {
    char name[50] ; 
    int studentID ;
    float score ;
} ;

int main() {

    int n , i ;
    int passcount = 0 ;
    int failcount = 0 ;

    while ( scanf("%d" , &n ) != 1 ) {
        printf( "enter score only stard 1 agane \n" ) ;
        while(getchar() != '\n') ;
    }

    struct studen studens[n] ;

    for( i = 0 ; i < n ; i++ ) {
        printf( "studen: %d\n" , i+1 ) ;
        if ( scanf( "%d %f %s" , &studens[i].studentID , &studens[i].score , studens[i].name ) != 3 ) {
            return 1 ;
        }
    }
    for ( i = 0 ; i < n ; i++ ) { 
        if(studens[i].score >= 60 ) {
            passcount++ ;
        } else {
            failcount++ ;
        }
    }
    
    printf( "Average score: %d\n" , passcount ) ;
    printf( "Average score: %d\n" , failcount ) ;
    return 0 ;
}