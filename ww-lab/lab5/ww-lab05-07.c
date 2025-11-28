#include <stdio.h>

void sort_array( int [] , int ) ;
void printf_array( int [] , int ) ;

int main( ) {
    int number[11] , copy[11] ;
    int i , n = 5 ;
    
    printf( "enter %d integer number for sorting:\n" , n  ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "Element:%d\n" , i + 1 ) ;
        while( scanf("%d" , &number[i] ) != 1 ) {
            printf("number pls\n");
        }
        copy[i] = number[i] ;
    }

    sort_array( number , n  ) ;

    printf( "\n---ARRAY SORTING REPORT---\n" ) ;
    printf( "Original Array\n" ) ;
    printf_array( copy , n ) ;
    printf( "Sorted Array(Ascending):\n" ) ;
    printf_array( number , n ) ;
    return 0 ;
}

void sort_array( int arr[] , int n ) {
    int i , j , swap ;
    for( i = 0 ; i < n ; i++ ) {
        for( j = 1 + i ; j < n ; j++ ){
            if( arr[i] > arr[j] ) {
                swap = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = swap ;
            }
        }
    }
    
}

void printf_array( int arr[] , int n ) {
    int i ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "%d " , arr[i] ) ;
    }
    printf( "\n" ) ;
}