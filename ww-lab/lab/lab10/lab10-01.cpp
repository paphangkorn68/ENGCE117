#include <stdio.h>

long long SumLoop(int n) ;
long long SumRecur(int n) ;

int main() {
    int n = 10 ;

    printf( "SumLoop(%d)  = %lld\n", n, SumLoop(n) ) ;
    printf( "SumRecur(%d) = %lld\n", n, SumRecur(n) ) ;
    printf( "SumRecur(1000000) = %lld\n" , SumRecur(1000000) ) ;

    return 0 ;
}

long long SumLoop( int n ) {
    long long sum = 0 ;
    for( int i = 1 ; i <= n ; i++ ) {
        sum += i ;
    }
    return sum ;
}

long long SumRecur( int n ) {
    if( n <= 1 )          
        return n ;
    else
        return n + SumRecur( n - 1 ) ;
}
