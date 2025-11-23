#include <stdio.h>

struct studen {
    char name[50] ; 
    int studentID ;
    float score ;
} ;

int main() {

    int n , i ;
    float ttsc = 0 ;
    while ( scanf("%d" , &n ) != 1 ) {
        printf( "enter score only stard 1 agane \n" ) ;
        while(getchar() != '\n') ;
    }

    struct studen studens[n] ;

    for( i = 0 ; i < n ; i++ ) {
        if ( scanf( "%d %f %s" , &studens[i].studentID , &studens[i].score , studens[i].name ) != 3 ) {
            return 1 ;
        }
        ttsc += studens[i].score ;
        
    }
    ttsc = ttsc / n ;
    printf( "Average score: %.2f\n" , ttsc ) ;
    return 0 ;
}