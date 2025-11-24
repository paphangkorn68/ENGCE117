#include <stdio.h>

int main() {
    int n , i ;
    int atklvl , opplvl , def ;
    float baseatk , damagereduc , finaldamage , damagedeficit ;
    const float hold = 150.0 ;

    while ( scanf( "%d" , &n ) != 1  ) {
        printf( "enter number only stard 1 agane \n" ) ;
        while(getchar() != '\n') ;
    }
    for( i = 0 ; i <= n ; i++ ) {
        while ( scanf( "%d %d %d" , &atklvl , &opplvl , &def ) != 3  ) {
            printf( "enter number only stard 1 agane \n" ) ;
            while(getchar() != '\n') ;
        }
        baseatk = atklvl * 10 ;

        if(def < 50 ) {
            damagereduc = 0.2 ;
        } else {
            damagereduc = 0.4 ;
        }
        finaldamage = baseatk * ( 1 - damagereduc ) ;
        if (finaldamage >= hold ) {
            printf( "SUCCESS! Final Damage: %.2f\n" , finaldamage ) ;

        } else {
            damagedeficit = hold - finaldamage ;
            printf( "FAIl. Deficit: %.2f\n" , damagedeficit ) ;
             
        }
        
    }
    return 0 ;
}