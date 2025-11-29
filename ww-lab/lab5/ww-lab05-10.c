#include <stdio.h>

int cal_amount(int cost, int paid);
int cal_denomination(int *change, int denomination);

int main() {
    int change, remain;
    int tt_costs, am_paid;
    int loob[9];
    int denominations[9] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};

    printf("Enter total cost (integer): \n");
    while (scanf("%d", &tt_costs) != 1) {
        printf("Number pls\n");
    }

    printf("Enter amount paid (integer): \n");
    while (scanf("%d", &am_paid) != 1) {
        printf("Number pls\n");
    }

    change = cal_amount(tt_costs, am_paid);

    if (change == -1) {
        printf("\nError: Amount Paid is less than total cost\n");
        return 0;
    }

    remain = change;

    for (int i = 0; i < 9; i++) {
        loob[i] = cal_denomination(&remain, denominations[i]);
    }

    printf("\n---CHANGE CALCULATION REPORT---\n");
    printf("Total cost: %d\n", tt_costs);
    printf("Amount paid: %d\n", am_paid);
    printf("Change amount: %d\n", change);

    printf("\nDenomination Breakdown:\n");
    for (int i = 0; i < 9; i++) {
        if (loob[i] > 0) {
            printf("%d Baht %d\n", denominations[i] , loob[i] );
        }
    }

    return 0;
}

int cal_amount(int cost, int paid) {
    if (paid >= cost) {
        return paid - cost;
    } else {
        return -1;
    }
}

int cal_denomination(int *change, int denomination) {
    int count = *change / denomination;
    *change = *change - (count * denomination);
    return count;
}