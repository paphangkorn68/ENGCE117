#include <stdio.h>

int find_and_update( int [] , int , int ) ;

int main(){
    int i , n = 5 ;
    int number[5] , search , update ;
    int status ;

    for ( i = 0 ; i < n ; i++ ) {
        printf( "enter number: \n" ) ;
        while ( scanf("%d", &number[i] ) != 1) {
            printf( "Number pls\n" ) ;
        }
    }

    printf( "search number: \n" ) ;
    while ( scanf("%d", &search ) != 1) {
        printf( "Number pls\n" ) ;
    }
    
    printf( "update number: \n" ) ;
    while ( scanf("%d", &update ) != 1) {
        printf( "Number pls\n" ) ;
    }    

    printf("\n---array update report---\n") ;
    printf("array pefore update:" ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "%d " , number[i] ) ;
    }

    status = find_and_update( number , search , update );

    printf( "\n" ) ;
    printf("array after update:" ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "%d " , number[i] ) ;
    }
    printf( "\n" ) ;
    if( status == 1 ) {
        printf( "Update SUCCESSFUL\n" ) ;
    } else {
        printf( "Update FAILED\n" ) ;
    }

    return 0 ;
}

int find_and_update( int Arr[] , int search , int update ) {
    int i , n = 5 ;
    for( i = 0 ; i < n ; i++ ) {
        if( search == Arr[i] ) {
            Arr[i] = update ;
            return 1 ;
        }
    }
    return 0 ;
}