#include <stdio.h>

float cal_win( int ) ;

int main(){
    float win_per ;
    int outs ;
    printf( "enter outs: \n" ) ;
    while ( scanf("%d", &outs ) != 1) {
        printf( "Number pls\n" ) ;
    }
    
    win_per = cal_win( outs ) ;

    printf("\n---poker probability report---\n") ;
    printf("calculated: %d\n" , outs ) ;
    printf("win probability(odds x 4): %.2f%%\n" , win_per ) ;
    printf("assessment:" ) ;
    if( win_per >= 30 ) {
        printf( "HIgh win probability\n" ) ;
    } else {
        printf( "LOW win probability\n" ) ;
    }

    return 0 ;
}

float cal_win( int n ) {
    float per ;
    per = n * 4 ;
    return per ;
}