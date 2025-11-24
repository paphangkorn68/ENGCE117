#include <stdio.h>

struct order {
    int choice ;
    float ttcost ;
    float paidamount ;
    float change ;
} ;

int main() {

    struct order orders ;
    do {
        printf( "\n---Vending Machine---\n" ) ;
        printf( "1. Coke (15.00)\n" ) ;
        printf( "2. Water (10.00)\n" ) ;
        printf( "3. Snak (25.00)\n" ) ;
        printf( "4. Exit and Pay\n" ) ;
        printf( "Current Total: %.2f\n" , orders.ttcost ) ;
        printf( "Select item (1-4):\n" ) ;

        while ( scanf( "%d" , &orders.choice ) != 1  ) {
        printf( "enter number only stard 1 agane \n" ) ;
        while(getchar() != '\n') ;
        }
        switch (orders.choice) {
        case 1:
            orders.ttcost += 15 ;
            break;
        case 2:
            orders.ttcost += 10 ;
            break;
        case 3:
            orders.ttcost += 25 ;
            break;
        default:
            break;
        }
    } while ( orders.choice != 4 ) ;
    
    if ( orders.ttcost > 0.00 ) {
        printf( "Total Due: %.2f\n" , orders.ttcost ) ;
        printf( "Enter paid amount: " ) ;
        if (scanf( "%f" , &orders.paidamount ) != 1 ) {
            return 1 ;
        }
        if (orders.paidamount >= orders.ttcost) {
            orders.change = orders.paidamount - orders.ttcost ;
            printf( "Purchase successful.Change: %.2f\n" , orders.change ) ;
        } else {
            printf( "Insufficient Payment. Purchase Cancelled.\n" ) ;
        }
        
    } else {
        printf( "No item purchased. Goodbye!\n" ) ;
    }
    
    return 0 ;
}