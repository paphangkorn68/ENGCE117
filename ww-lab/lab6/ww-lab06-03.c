#include <stdio.h>
int main() {
    int n = 3 , i  ;
    int data[n] , *ptr ;
    
    for( i = 0 ; i < n ; i++ ) {
        printf( "enter number\n" ) ;
        while (scanf("%d",&data[i]) != 1 ) {
            printf( "number only\n" ) ; 
        }
    }
    ptr = data ;
    printf( "\n---ARRARY AND POINTER REPORT---\n" ) ;
    printf( "index | vaiue (direct) | value (via pointer) | address \n" ) ;
    printf( "------------------------------------------\n" ) ; 
    
    for( i = 0 ; i < n ; i++ ) {
        printf( "%5d | %14d | %19d | %p \n" , i , data[i] , *(ptr + i ) , (void*)(ptr + i ) ) ;
    }

    return 0 ;
}