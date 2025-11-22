#include <stdio.h>

int main() {
    
    int N_MONTHS , month , successCount = 0 , L = 1 ;
    float in[N_MONTHS + 1 ] ;
    float dailyDeposit , monthlyTotal ;
     
    
    if ( scanf( "%d" , &N_MONTHS ) != 1 ) {
        return 1 ;
    }
    
    
    for ( month = 1 ; month <= N_MONTHS ; month++ ) {
        monthlyTotal = 0.0 ;
        
        
        if ( scanf( "%f" , &dailyDeposit ) != 1 ) {
             break ;
        }

        
        while ( dailyDeposit != 0.00 ) {
            monthlyTotal += dailyDeposit ;
            in[month] = monthlyTotal ;
            if (scanf( "%f" , &dailyDeposit) != 1 ) {
                break ;
            }
        }
        
        if ( monthlyTotal >= 500 ) {
                successCount++ ;
            }
        
    }
    while ( L <= N_MONTHS ) {
        printf( "Month %d Total: %.2f\n" , L , in[L] ) ;
        L++ ;
    }
        
    
    printf( "Success Count: %d\n" , successCount ) ;
    return 0 ;
}
