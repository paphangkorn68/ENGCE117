// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int planCode ;
    int cout = 0 ;
    float dataUsage_GB ;
    float totalBill = 0.0 ;
    
    // รับค่ารหัสแพ็กเกจและปริมาณการใช้ข้อมูล
    printf( "enter number\n" ) ;
    while ( scanf("%d %f", &planCode, &dataUsage_GB) != 2 ) {
        printf( "Error enter number only \n" ) ;
        while(getchar() != '\n') ;
    }
    // TODO: Implement the switch statement based on planCode, 
    // and the nested if-else logic to apply the correct formula.
    switch ( planCode ) {
    case 1 :
        if ( dataUsage_GB > 10 ) {
            dataUsage_GB -= 10 ;
            do {
                dataUsage_GB -= 1 ;
                cout++ ;
            } while ( dataUsage_GB > 0 ) ;
                cout = cout * 10 ;
                totalBill = cout + 299 ;
               
        } else {
            totalBill = 299 ;
        }
        break;
    case 2 :
        if ( dataUsage_GB > 20 ) {
            dataUsage_GB -= 20 ;
            do {
                dataUsage_GB -= 1 ;
                cout++ ;
            } while ( dataUsage_GB > 0 ) ;
                cout = cout * 5 ;
                totalBill = cout + 599 + 50 ;
               
        } else {
            totalBill = 599 ;
        }
        break;
    
    default:
        break;
    }
    if (planCode == 1 || planCode == 2) {
        printf("%.2f\n", totalBill);
    } else {
        printf("Invalid Plan Code\n");
    }

    return 0;
}
