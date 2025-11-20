#include <stdio.h>

int main() {
    int zoneCode ;
    float weight_kg ;
    float totalCost = 0.0 ;
    
    if( scanf( "%d %f" , &zoneCode , &weight_kg ) != 2 ) {
        return 1 ;
    }

    switch( zoneCode ) {
    case 1 :

        if( weight_kg <= 5 ) {
            printf( "50" ) ;
        } else {
            printf( "80" ) ;
        }
        break ;
    
        case 2 :
        if( weight_kg <= 10 ) {
            printf( "150" ) ;
        } else {
            printf( "250" ) ;
        }
        break ;

        case 3 :
        printf( "500" ) ;
        break ;

    default :
        printf( "Invalid Zone Code\n" ) ;
        break ;
    }

    if( totalCost > 0.0 || zoneCode > 3 || zoneCode < 1 ) {
        printf( "%.2f\n" , totalCost) ;
    } 
    return 0 ;
}