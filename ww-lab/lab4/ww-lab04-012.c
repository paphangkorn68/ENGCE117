#include <stdio.h>

void print_matrix( int row , int cols , int matrix[row][cols] ) ;

int main() {
    int ar = 2 , ac = 3 , br = 2 , bc = 3 ;
    int cr = 2 , cc = 2 , btr = 3 , btc = 2 ;
    int a[ar][ac] ;
    int a2[ar][ac] ;
    int b[br][bc] ;
    int bt[btr][btc] ;
    int c[cr][cc] ;
    int i , j , k ;

    printf( "enter elements for matrix a (2x3)\n" ) ;
    for( i = 0 ; i < ar ; i++) {
        for( j = 0 ; j < ac ; j++ ) {
            printf( "a[%d][%d]:" , i , j ) ;
            scanf( "%d" , &a[i][j] ) ;

        }
        
    } 

    printf( "enter elements for matrix b (2x3)\n" ) ;
    for( i = 0 ; i < br ; i++) {
        for( j = 0 ; j < bc ; j++ ) {
            printf( "b[%d][%d]:" , i , j ) ;
            scanf( "%d" , &b[i][j] ) ;
            bt[j][i] = b[i][j] ; 
            
            c[j][i] = a[i][j] * bt[j][i] ;
        }
        
    }

    c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[0][1] + a[0][2] * b[0][2] ;
    c[0][1] = a[0][0] * b[1][0] + a[0][1] * b[1][1] + a[0][2] * b[1][2] ;
    c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[0][1] + a[1][2] * b[0][2] ;
    c[1][1] = a[1][0] * b[1][0] + a[1][1] * b[1][1] + a[1][2] * b[1][2] ;
    printf( "\n---MATRIX MULTIPLICATION REPORT---\n" ) ;

    printf( "\nMatrix a (2x3):\n" ) ;
    print_matrix( ar , ac , a ) ;

    printf( "\nMatrix b (2x3):\n" ) ;
    print_matrix( br , bc , b ) ;

    printf( "\nMatrix bt (3x2):\n" ) ;
    print_matrix( btr , btc , bt ) ;

    printf( "\nMatrix c (A x BTransposed , 2x2 ):\n" ) ;
    print_matrix( cr , cc , c ) ;

    return 0 ;
}

void print_matrix( int row , int cols , int matrix[row][cols] ) {
    for( int i = 0 ; i < row ; i++ ) {
        for ( int j = 0 ; j < cols ; j++ ) {
            printf( "%4d " , matrix[i][j] ) ;
        }
        printf( "\n" ) ;
    }
}