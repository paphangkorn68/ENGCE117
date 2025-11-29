#include <stdio.h>

int cal_net( int , int [] ) ;

int main(){
    int n = 5 , i , net_balan ;
    int finance , ts_tion[n] ; 

    for( i = 0 ; i < n ; i++ ) {
        printf( "order: %d \n" , i + 1 ) ;
        while ( scanf("%d", &ts_tion[i] ) != 1) {
            printf( "Number pls\n" ) ;
        }
    }

    net_balan = cal_net( n , ts_tion ) ;

    printf("\n--- personal finance report---\n") ;
    printf("transtions recorded:") ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "%d " , ts_tion[i] ) ;
    }
    printf("\n") ;
    printf("net balance: %d\n" , net_balan ) ;
    printf("status:" ) ;
    if( net_balan >= 0 ) {
        printf( "PROFIT\n" ) ;
    } else {
        printf( "LOSS\n" ) ;
    }

    return 0 ;
}

int cal_net( int n , int arr[] ) {
    int sum = 0 , i ;
    for( i = 0 ; i < n ; i++ ) {
        sum += arr[i] ;
    }
    return sum ;
}