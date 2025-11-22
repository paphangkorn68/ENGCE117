// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int N, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;
    
    // รับค่า N (จำนวนรายการ)
    printf( "enter number\n" ) ;
    while ( scanf("%d", &N) != 1 ) {
        printf( "enter number only \n" ) ;
        while(getchar() != '\n') ;
    }
    // TODO: Implement the for loop (N times)
    // TODO: Inside the loop, receive unitPrice and quantity
    // TODO: Implement the if-else discount logic and accumulate grandTotal
    for ( i = 0 ; i < N ; i++ ) {
        if (scanf("%f %d", &unitPrice , &quantity ) != 2) {
            return 1;
        } else {
            if ( unitPrice >= 1000 ) {
                itemCost = unitPrice ;
                unitPrice = unitPrice * 0.1 ;
                itemCost = itemCost - unitPrice ;
                itemCost = itemCost * quantity ;
            } else {
                itemCost = unitPrice *quantity ;
            }
            
        }
        grandTotal += itemCost ;
        
        
    }
    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}
