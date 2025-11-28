#include <stdio.h>

struct studen {
    int id ;
    int Score ;
} typedef ss ;

int max_score( ss stden[] , int ) ;

int main( ) {
    struct studen stden[3] ;
    int top_id ;
    int i , n = 3;

    printf( "enter data for %d studens:\n" , n  ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "---studen:%d---\n" , i + 1 ) ;
        printf( "enter id studen %d\n" , i + 1 ) ;
        while( scanf("%d" , &stden[i].id ) != 1 ) {
            printf("number pls\n");
        }
        printf( "enter score studen %d\n" , i + 1 ) ;
        while( scanf("%d" , &stden[i].Score ) != 1 ) {
            printf("number pls\n");
        }
    }
    top_id = max_score( stden , n ) ;

    printf( "\n---STYDEN SCORE REPORT---\n" ) ;
    printf( "ID|Score\n" ) ;
    printf( "------|------\n" ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "%-6d|%d\n" , stden[i].id , stden[i].Score ) ;
    }
    printf( "TOP PERFORMER ID; %d\n" , top_id ) ;
    return 0 ;
}

int max_score( ss stden[] , int n ) {
    int i , score , id ;
    int cron[n] ; 
    score = stden[0].Score ;
    id = stden[0].id ;
    for( i = 0 ; i < n ; i++ ) {
        cron[i] = stden[i].Score ;
        if( score >= stden[i].Score ) {
            
        } else {
            score = stden[i].Score ;
            id = stden[i].id ;
        }
    }
    return id ;
}