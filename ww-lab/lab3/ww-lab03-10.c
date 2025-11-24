#include <stdio.h>

struct unit {
    char name[50] ; 
    float unitprice ;
    int quantity ;
} ;

int main() {

    int n , i ;
    float subtt = 0.0 , itemcost ;
    float ttvet , grandtt = 0.0 , vatrate = 0.07 ;

    while ( scanf("%d" , &n ) != 1 ) {
        printf( "enter number only stard 1 agane \n" ) ;
        while(getchar() != '\n') ;
    }

    struct unit orders[n] ;

    printf( "---PECEIPT---\n" ) ;

    for( i = 0 ; i < n ; i++ ) {
        printf( "order:%d\n" , i + 1 ) ;
        if ( scanf( "%s %f %d" , &orders[i].name , &orders[i].unitprice , &orders[i].quantity ) != 3 ) {
            return 1 ;
        }

        itemcost = (orders[i].unitprice * orders[i].quantity ) ;
        printf( "%s x %d = %.2f\n" , orders[i].name , orders[i].quantity , itemcost ) ;
        subtt += itemcost ;
    }
    ttvet = subtt * vatrate ;
    grandtt = subtt + ttvet ;
    printf( "---------------------\n" ) ;
    printf( "Subtotal: %.2f\n" , subtt ) ;
    printf( "Vat (7%): %.2f\n" , ttvet ) ;
    printf( "Grand Total: %.2f\n" , grandtt ) ;
    return 0 ;
}