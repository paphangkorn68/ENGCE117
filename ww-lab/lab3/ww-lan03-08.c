#include <stdio.h>

struct campaign {
    char name[50] ;
    float pdprice ;
    int scount ;
    float adspend ;
} ;

int main() {

    int n , i ;
    float comrate = 0.0 , ttrevenue = 0.0 , ttcom = 0.0 , netpro = 0.0 ;
     
    while ( scanf("%d" , &n ) != 1 ) {
        printf( "enter number only stard 1 agane \n" ) ;
        while(getchar() != '\n') ;
    }

    struct campaign orders[n] ;

    for( i = 0 ; i < n ; i++ ) {
        printf( "order:%d\n" , i + 1 ) ;
        if ( scanf( "%s %f %d %f" , orders[i].name , &orders[i].pdprice , &orders[i].scount , &orders[i].adspend ) != 4 ) {
            return 1 ;
        }

        ttrevenue = orders[i].scount * orders[i].pdprice ;

        if ( orders[i].scount >= 20 ) {
           comrate = 0.20 ;
        } else if (orders[i].scount >= 10 ) {
           comrate = 0.15 ;
        } else {
            comrate = 0.1 ;
        }
        ttcom = ttrevenue * comrate ;
        netpro = ttcom - orders[i].adspend ;
        
        printf( "--- Copaign: %s ---\n" , orders[i].name ) ;
        printf( "Sales: %d, AD Spen: %.2f\n" , orders[i].scount , orders[i].adspend ) ;
        printf( "Rate Used: %.0f%%\n" , comrate * 100 ) ;
        printf( "Calculation: (%.2f * %.0f%%) - %.2f = %.2f\n" , ttrevenue , comrate * 100 , orders[i].adspend , netpro ) ;
        printf( "Net Result: %.2f\n" , netpro ) ;
    }   

    return 0 ;
}