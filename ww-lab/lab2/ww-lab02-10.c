#include <stdio.h>

int main() {
    int N_PERIODS, cmdCode, i ;
    float initialBalance, PENALTY_FEE, amount , apr ;
    float currentBalance , interest ;
    float totalPenalties = 0.0;

    if (scanf("%f %f %d", &initialBalance, &PENALTY_FEE, &N_PERIODS) != 3) {
        return 1;
    }   

    currentBalance = initialBalance;

    printf("Starting Balance: %.2f\n", initialBalance);
    for (i = 1; i <= N_PERIODS; i++) {
        if (scanf("%d %f", &cmdCode, &amount) != 2) {
            break;
        }
        printf("--- Month %d ---\n", i);
        switch (cmdCode) {
        case 1 :
            currentBalance += amount ;
            printf( "Deposit:[%.2f]\n" , amount ) ;
            break ;
        
        case 2 :
            if ( amount <= currentBalance ) {
                currentBalance -= amount ;
                printf( "Withdrawal:[%.2f]\n" , amount ) ;
            } else if (amount > currentBalance ) {
                totalPenalties += PENALTY_FEE ;
                printf( "Withdrawal Failed:[%.2f] applied\n" , PENALTY_FEE ) ;
            }
            break ;

        case 3 :
            if ( currentBalance < 1000 ) {
                apr = 0.01 ;
                interest = currentBalance * ( apr / 12 ) ;
            } else {
                apr = 0.025 ;
                interest = currentBalance * ( apr / 12 ) ;
            }
            currentBalance += interest ;
            printf( "interest:[%.2f]" , interest ) ;
            printf( "Rate:[%.2f%]\n " , apr*100 ) ;
            break ;
        default:
            printf( "Error:Invalid Command\n" ) ;
            break;
        }
    }
    printf("Final Balance: %.2f\n", currentBalance);
    printf("Total Penalties: %.2f\n", totalPenalties);
    return 0;
}