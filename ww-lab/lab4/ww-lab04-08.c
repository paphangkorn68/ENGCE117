#include <stdio.h>
int main() {

    int n , i , j , max = 10 ;
    int data[max] , status[max] ;
    int count ;

    printf( "enter the number of eleents(n, max %d): \n" , max ) ;
    while( scanf( "%d" , &n ) != 1 || n > 10 || n <= 0 ) {
    printf( "number 1 - 10 pls\n" ) ;
    }

    printf( "enter %d interger: \n" , n ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "element %d: \n" , i + 1 ) ;
        while( scanf( "%d" , &data[i] ) != 1 ) {
        printf( "number pls\n" ) ;
        } 
    }

    printf( "\n---FREQUENCY ANALYSIS REPORT---\n" ) ;
    printf( "Total elements recorded(N): %d \n" , n ) ;
    printf( "Recorded Numbers:") ;
    for( i = 0 ; i < n ; i++ ) {
        printf( " %d" , data[i] ) ;
    }
    printf( "---Frequency Table---\n") ;
    printf( "Number | Frequency \n" ) ;
    printf( "---------------------------\n") ;
    for(i = 0 ; i < n ; i ++ ) {
        count = 0 ;
        if( status[i] == -1 ) {
            continue;
        }
       
        for( j = 0 ; j < n ; j++ ) {
            if( data[j] == data[i] ) {
                status[j] = -1 ;
                count++ ;
            }
        }
        if(data[i] != -1 ) {
            printf( "%d |%d\n" , data[i] , count ) ;
        }
    }
    return 0 ;
}