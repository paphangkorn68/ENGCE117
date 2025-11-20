#include <stdio.h>

int main() {
    int clearanceLevel , age , isActive ;

    if( scanf( "%d %d %d" , &clearanceLevel , &age , &isActive ) != 3 ) {
        return 1 ; 
    } 
    if( isActive == 1 ) {
        if( clearanceLevel == 3 ) {
            printf( "Access GRANTED\n" ) ;
        } else if ( clearanceLevel == 2 ) {
            if ( age >= 25 ) {
                printf( "Access GRANTED\n" ) ;
            } else {
                printf( "Access DENIED\n" ) ;
            }
            
            
        } else {
            printf( "Access DENIED\n" ) ;
        }
        
        
    } else {
        printf( "Access DENIED\n" ) ;
    }
    

    return 0;
}