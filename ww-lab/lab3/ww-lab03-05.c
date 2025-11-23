#include <stdio.h>

struct order {
    int itemId ; 
    float unitprice ;
    int quantity ;
} ;

int main() {

    int n , i ;
    float grandTT = 0.0 ;
    float itemtt , sipping_FEE = 50 ;

    while ( scanf("%d" , &n ) != 1 ) {
        printf( "enter number only stard 1 agane \n" ) ;
        while(getchar() != '\n') ;
    }

    struct order orders[n] ;

    for( i = 0 ; i < n ; i++ ) {
        printf( "order:%d\n" , i + 1 ) ;
        if ( scanf( "%d %f %d" , &orders[i].itemId , &orders[i].unitprice , &orders[i].quantity ) != 3 ) {
            return 1 ;
        }

        itemtt += (orders[i].unitprice * orders[i].quantity ) ;
        
    }
    itemtt += sipping_FEE ;
    if (itemtt >= 500 ) {
            itemtt = itemtt - ( itemtt * 0.1 ) ;
        }
    grandTT += itemtt ;
   
    printf( "Grand Total: %.2f\n" , grandTT ) ;
    return 0 ;
}