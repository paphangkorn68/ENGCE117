#include <stdio.h>

struct employee {
    int id ;
    int salary ;
} typedef ss ;

int max_score( ss employee[] , int , int * , int * ) ;

int main( ) {
    struct employee employees[4] ;
    int max , min ;
    int i , n = 4 , salary_max = 0 , salary_min = 0 ;
    
    printf( "enter data for %d employees:\n" , n  ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "---employee:%d---\n" , i + 1 ) ;
        printf( "enter id \n" ) ;
        while( scanf("%d" , &employees[i].id ) != 1 ) {
            printf("number pls\n");
        }
        printf( "enter salary;\n" ) ;
        while( scanf("%d" , &employees[i].salary ) != 1 ) {
            printf("number pls\n");
        }
    }
    max_score( employees , n , &max , &min ) ;

    printf( "\n---EMPLOYEE SALAY SUMMARY---\n" ) ;
    printf( "ID|Salary\n" ) ;
    printf( "------|------\n" ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "%-6d|%d\n" , employees[i].id , employees[i].salary ) ;
    }
    printf( "\nMaximu Salary: %d\n" , max ) ;
    printf( "Minimum Salary Found: %d\n" , min ) ;
    return 0 ;
}

int max_score( ss employees[] , int n , int *max , int *min ) {
    int i , score , score2 , max_1 , min_1 ;
    int cron[n] ; 
    score2 = employees[0].salary ;
    score = employees[0].salary ;
    max_1 = employees[0].salary ;
    min_1 = employees[0].salary ;
    
    for( i = 0 ; i < n ; i++ ) {
        if(  employees[i].salary > max_1 ) {
            max_1 = employees[i].salary ;
        } 
    }
    *max = max_1 ;
    score2 = employees[0].salary ;
    for( i = 0 ; i < n ; i++ ) {
        if( employees[i].salary < min_1  ) {
            
            min_1 = employees[i].salary ;
            printf( "min1: %d\n" , min_1 ) ;
        } 
    }
    *min = min_1 ;
    return i ;
}