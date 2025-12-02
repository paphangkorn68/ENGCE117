#include <iostream>
#include <stdio.h>

int getset( int [] , int ) ;

int main() {
    int *data , num , n , i ;
    data = new int[n] ;
    printf( "arr[n]\n" ) ;
    while ( scanf( "%d" , &n ) != 1 ) {
        printf( "1 more \n" ) ;
    }
    
    for( i = 0 ; i < n ; i++ ) {
        printf( "enter value arr[%d]\n" , i ) ;
        while ( scanf( "%d" , &data[i] ) != 1 ) {
            printf( "1 more \n" ) ;
        }
    }

    num = getset( data , n ) ;
    printf( "array report\n" ) ;
    printf( "value arr:" ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "%d " , data[i] ) ;
    }
    printf( "\n" ) ;
    printf( "sum value arr: %d\n" , num ) ;


    return 0 ;
}

int getset( int arr[] , int n ) {
    int sum ;
    for( int i = 0 ; i < n ; i++ ) {
        sum += arr[i] ;
    }

    return sum ;
}