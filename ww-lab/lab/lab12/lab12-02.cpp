#include <stdio.h>

int* KnapsackGreedy( int *w, int *v, int n, int wx ) ;

int main() {
    int n = 5, wx = 11 ;
    int w[5] = {1, 2, 5, 6, 7 };
    int v[5] = {1, 6, 18, 22, 28} ;

    int *x = KnapsackGreedy(w, v, n, wx) ;

    for( int i = 0 ; i < n ; i++ )
        printf( "%d " , x[i] ) ;

    return 0 ;
}

int* KnapsackGreedy( int *w, int *v, int n, int wx ) {
    int *x = new int[n] ;
    float ratio[100] ;
    int index[100] ;

    for( int i = 0; i < n; i++ ) {
        x[i] = 0 ;
        ratio[i] = (float)v[i] / w[i] ;
        index[i] = i ;
    }

    for( int i = 0; i < n-1; i++ ) {
        for( int j = i+1; j < n; j++ ) {
            if( ratio[i] < ratio[j] ) {
                float tr = ratio[i] ;
                ratio[i] = ratio[j] ;
                ratio[j] = tr ;

                int ti = index[i] ;
                index[i] = index[j] ;
                index[j] = ti ;
            }
        }
    }

    int totalW = 0 ;

    for( int i = 0; i < n; i++ ) {
        int k = index[i] ;
        if( totalW + w[k] <= wx ) {
            x[k] = 1 ;
            totalW += w[k] ;
        }
    }

    return x ;
}