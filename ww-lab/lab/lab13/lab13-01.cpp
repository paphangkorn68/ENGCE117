#include <stdio.h>

int* KnapsackDP( int *w, int *v, int n, int wx ) ;

int main() {
    int n = 5, wmax = 11 ;
    int w[5] = {1, 2, 5, 6, 7};
    int v[5] = {1, 6, 18, 22, 28} ;

    int *x;
    x = KnapsackDP(w, v, n, wmax);

    for( int i = 0 ; i < n ; i++ )
        printf( "%d " , x[i] ) ;

    return 0 ;
}

int* KnapsackDP(int *w, int *v, int n, int wmax) {

    int **K = new int*[n+1] ;
    for(int i = 0; i <= n; i++)
        K[i] = new int[wmax+1] ;

    for( int i = 0; i <= n; i++ ) {
        for( int j = 0; j <= wmax; j++ ) {

            if( i == 0 || j == 0 )
                K[i][j] = 0 ;

            else if(w[i-1] <= j) {

                int include = v[i-1] + K[i-1][ j - w[i-1] ] ;
                int exclude = K[i-1][j] ;

                K[i][j] = ( include > exclude ) ? include : exclude ;
            }
            else
                K[i][j] = K[i-1][j] ;
        }
    }

    int *x = new int[n] ;
    for( int i = 0; i < n; i++ )
        x[i] = 0 ;

    int i = n ;
    int j = wmax ;

    while(i > 0 && j > 0) {

        if( K[i][j] != K[i-1][j] ) {
            x[i-1] = 1 ;
            j -= w[i-1] ;
        }
        i-- ;
    }

    return x ;
}
