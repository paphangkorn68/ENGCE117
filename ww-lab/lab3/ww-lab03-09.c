#include <stdio.h>

struct Day {
    int n_day ;
    float inbudget ;
    float remaine ;
    float dailyspend ;
} ;

int main() {

    int i ;
    
    struct Day orders ;
    
    while ( scanf( "%f %d" , &orders.inbudget , &orders.n_day ) != 2  ) {
        printf( "enter number only stard 1 agane \n" ) ;
        while(getchar() != '\n') ;
    }

    orders.remaine = orders.inbudget ;
    printf( "Day | Spent | Remaining\n" ) ;
    printf( "------------------------\n" ) ;

    for( i = 1 ; i <= orders.n_day ; i++ ) {
    
        if ( orders.remaine >= 500 ) {
           orders.dailyspend = 100 ;
        } else if (orders.remaine >= 100) {
           orders.dailyspend = 50 ;
        }  else if (orders.remaine >= 0) {
           orders.dailyspend = 20 ;
        } else {
            orders.dailyspend = 0 ;
        }
        if (orders.dailyspend > orders.remaine ) {
            orders.dailyspend = orders.remaine ;
        }
        orders.remaine -= orders.dailyspend ;
        
        printf( "%d | %.2f | %.2f\n" , i , orders.dailyspend , orders.remaine ) ;
        
    }   
    printf( "------------------------\n" ) ;
    printf( "Final Buget: %.2f\n" , orders.remaine ) ;
    return 0 ;
}