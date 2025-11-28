#include <stdio.h>

struct studen {
    int id ;
} typedef ss ;

int check_id( ss stden[] , int , int ) ;

int main( ) {
    struct studen stden[4] ;
    int search_id ;
    int fount_status ;
    int i , n = 4;

    printf( "enter ids for %d studens:\n" , n  ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "---studen:%d---\n" , i + 1 ) ;
        printf( "enter id studen %d\n" , i + 1 ) ;
        while( scanf("%d" , &stden[i].id ) != 1 ) {
            printf("number pls\n");
        }
    }

    printf( "enter id to searcg:\n") ;
    while( scanf("%d" , &search_id ) != 1 ) {
        printf("number pls\n");
    }
    fount_status = check_id( stden , search_id , n ) ;

    printf( "\n---ID SEARCH REPORT---\n" ) ;
    printf("recorded ids:" ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( " %d" , stden[i].id ) ;
    }
    printf( "\n" ) ;
    printf( "Search id: %d\n" , search_id ) ;
    if( fount_status == 1 ) {
        printf( "ID FOUND in system\n" ) ;
    } else {
        printf( "ID NOT FOUND in system\n" ) ;
    }
    return 0 ;
}

int check_id( ss stden[] , int search_id , int n ) {
    int i , tf ; 
    for( i = 0 ; i < n ; i++ ) {
        if( search_id == stden[i].id ) {
            return 1 ;
        } 
        
    }
    return 0 ;
}