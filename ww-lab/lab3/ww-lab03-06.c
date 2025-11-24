#include <stdio.h>

struct transaction {
    char description[50] ;
    float amount ;
} ;

int main() {

    int n , i ;
    float tticome = 0.0 , ttexp = 0.0, netbalance = 0.0 ;
     

    while ( scanf("%d" , &n ) != 1 ) {
        printf( "enter number only stard 1 agane \n" ) ;
        while(getchar() != '\n') ;
    }

    struct transaction orders[n] ;

    for( i = 0 ; i < n ; i++ ) {
        printf( "order:%d\n" , i + 1 ) ;
        if ( scanf( "%f %s" , &orders[i].amount , &orders[i].description ) != 2 ) {
            return 1 ;
        }
        if ( orders[i].amount >= 0.0 ) {
            tticome += orders[i].amount ;
        } else {
            ttexp += -orders[i].amount ;
        }
        
    }
    netbalance = tticome - ttexp ;   
    printf( "Total Income: %.2f\n" , tticome ) ;
    printf( "Total Expense: %.2f\n" , ttexp ) ;
    printf( "Net Balance: %.2f\n" , netbalance ) ;
    return 0 ;
}