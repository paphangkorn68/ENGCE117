#include <stdio.h>

int cal_sum( int arrnum[] , int n ) ;

int main() {
    int n = 5 , i , arrnum[5] , sum ;
    float ava_sum ;
    for( i =0 ; i < n ; i++ ) {
        while( scanf("%d" , &arrnum[i]) != 1 ) {
            printf("number pls\n");
        }
        
    }
    sum = cal_sum( arrnum , n ) ;
    ava_sum = (float)sum / n ;
    printf("---array report---\n");
    printf("recorded numbers: %d\n" ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( " %d" , arrnum[i] ) ;
    }
    printf("\n" ) ;
    printf("total sum: %d\n", sum ) ;
    printf("averag: %.2f\n", ava_sum ) ;

    return 0;
}

int cal_sum( int arrnum[5] , int n ) {
    int sum = 0 , i ;
    for ( i = 0 ; i < n ; i++ ) {
        sum += arrnum[i] ;
    }
    return sum ;
}