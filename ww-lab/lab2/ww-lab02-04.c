#include <stdio.h>

int main() {
    float principal, monthlyPayment, interest;
    int monthCount = 0;
    const float INTEREST_RATE = 0.01;
    const float PENALTY = 10.0;
    if (scanf("%f %f", &principal, &monthlyPayment) != 2) {
        return 1;
    }
    while ( principal > 0 ) {
        interest = principal * 0.01 ;
        principal += interest ;
        if ( monthlyPayment < interest) {
            principal += PENALTY ;
        }
        principal -= monthlyPayment ;
        monthCount++ ;
        printf( "Month %d: Remaining %.2f\n" , monthCount , principal ) ;
    }
    
    printf("Loan settled in %d months.\n", monthCount);
    return 0;
}