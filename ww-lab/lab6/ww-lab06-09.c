#include <stdio.h>

void status_businet( int , int * ) ;
void analyze( int [] , int * ) ;

int main(){
    int i , n = 3 ;
    int revenue[3] , net_porfit , status , sumr = 0 , sumex = 0 ;
    int expense[3] ;

    printf( "enter 3 months revenue: \n" ) ;
    for ( i = 0 ; i < n ; i++ ) {
        while ( scanf("%d", &revenue[i] ) != 1) {
            printf( "Number pls\n" ) ;
        }
    }

    analyze( revenue , &sumr ) ;

    printf( "enter 3 months expense: \n" ) ;
    for ( i = 0 ; i < n ; i++ ) {
        while ( scanf("%d", &expense[i] ) != 1) {
            printf( "Number pls\n" ) ;
        }
    }
    
    analyze( expense , &sumex ) ;
    net_porfit = sumr - sumex ;

    printf("\n---3 month financial analysis report---\n") ;
    printf("total revenue: %d\n" , sumr ) ;
    printf("total expense: %d\n" , sumex ) ;
    printf("net profit: %d\n" , net_porfit ) ;
    printf("business status:" ) ;
    status_businet( net_porfit , &status ) ;
    if( status == 1 ) {
        printf( "project is profitable\n" ) ;
    } else {
        printf( "project is unprofitable\n" ) ;
    }

    return 0 ;
}

void analyze( int arr[] , int *sum ) {
    int i , n = 3 ; 
    for( i = 0 ; i < n ; i++ ) {
        *sum += arr[i] ;
    }
}

void status_businet( int net_porfit , int *status ) {
    if( net_porfit >= 0 ) { 
        *status = 1 ;
    } else{
        *status = 0 ;
    }
    
}