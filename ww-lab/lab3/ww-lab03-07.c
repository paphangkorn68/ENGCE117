#include <stdio.h>

struct transaction {
    char name[50] ;
    float targrt ;
    float actual ;
} ;

int main() {

    int n , i ;
    float grandttcom = 0.0 , basecom = 0.0 ;
     

    while ( scanf("%d" , &n ) != 1 ) {
        printf( "enter number only stard 1 agane \n" ) ;
        while(getchar() != '\n') ;
    }

    struct transaction orders[n] ;

    for( i = 0 ; i < n ; i++ ) {
        printf( "order:%d\n" , i + 1 ) ;
        if ( scanf( "%f %f %s" , &orders[i].targrt , &orders[i].actual , orders[i].name ) != 3 ) {
            return 1 ;
        }

        basecom = orders[i].actual * 0.1 ;

        if ( orders[i].actual >= orders[i].targrt * 1.2 ) {
           basecom += 200 ;
        } else if (orders[i].actual >= orders[i].targrt) {
            basecom += 50 ;
        } else if (orders[i].actual < orders[i].targrt * 0.9 ) {
            basecom -= 100 ;
        }
        grandttcom += basecom ;
        
    }

    printf( "Grand Total Commission: %.2f\n" , grandttcom ) ;
    return 0 ;
}