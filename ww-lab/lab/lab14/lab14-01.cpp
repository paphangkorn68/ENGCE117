#include <stdio.h>

int bestValue = 0 ;
int *bestSet ;

int KnapsackBT( int *w, int *v, int n, int wx, int i, int *x ) ;
void Backtrack( int *w, int *v, int n, int wx,int i, int curW, int curV, int *x ) ;

int main() {
    int n = 5, wx = 11 ;
    int w[5] = {1, 2, 5, 6, 7} ;
    int v[5] = {1, 6, 18, 22, 28} ;

    int *x, vx ;
    x = new int[n] ;

    vx = KnapsackBT( w, v, n, wx, 0, x ) ;

    printf("Value = %d\n", vx) ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", x[i] ) ;
    }

    return 0 ;
}

int KnapsackBT( int *w, int *v, int n, int wx, int i, int *x ) {

    bestSet = new int[n] ;
    for(int k = 0 ; k < n ; k++ )
        bestSet[k] = 0 ;

    Backtrack(w, v, n, wx, 0, 0, 0, x) ;

    for(int k = 0 ; k < n ; k++ )
        x[k] = bestSet[k] ;

    return bestValue ;
}

void Backtrack( int *w, int *v, int n, int wx,int i, int curW, int curV, int *x ) {

    if(i == n) {
        if( curV > bestValue ) {
            bestValue = curV ;
            for( int k = 0 ; k < n ; k++ )
                bestSet[k] = x[k] ;
        }
        return ;
    }

    if(curW + w[i] <= wx) {
        x[i] = 1 ;
        Backtrack( w, v, n, wx,i+1, curW + w[i], curV + v[i], x ) ;
    }
    x[i] = 0 ;
    Backtrack( w, v, n, wx,i+1, curW, curV, x ) ;
}
