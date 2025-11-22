#include <stdio.h>

int main() {
    int categoryCode;
    float price_before_vat;
    float totalBill = 0.0;
    float vatAmount = 0.0;
    
    printf( "enter number\n" ) ;
    while ( scanf("%f %d", &price_before_vat, &categoryCode) != 2 ) {
        printf( "Error enter number only \n" ) ;
        while(getchar() != '\n') ;
    }

    switch (categoryCode) {
    case 1 :
        totalBill = price_before_vat * 1.07 ;
        break;
    case 2 : 
        totalBill = price_before_vat ;
        break ;
    case 3 :
        totalBill = price_before_vat * 1.15 ;
        break;
    default:
        break;
    }

    if (categoryCode >= 1 && categoryCode <= 3) {
        vatAmount = totalBill - price_before_vat;
        printf("VAT Amount: %.2f\n", vatAmount);
        printf("Total Price: %.2f\n", totalBill);
    } else {
        printf("Invalid Category\n");
    }

    return 0;
}
