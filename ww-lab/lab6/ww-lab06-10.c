#include <stdio.h>

struct studen {
    int id ;
    int score  ;
    char grade ;
} typedef ss ;

void menu( int ) ;
void case_1( ss [] ) ;
void case_2( ss [] ) ;
char grade( ss [] ) ;

int main() {

    int i , n = 10 , choice ;
    struct studen studen[n] ;
    studen[0].id = 0 ;

    do {
        menu( choice ) ;
        while ( scanf( "%d" , &choice ) != 1 || choice < 1 ) {
            printf( "number ( 1 2 or 3 ) only \n" ) ;
            
        }
        switch (choice) {
        case 1 :
            printf( "Enter choice %d \n" , choice ) ;
            case_1( studen ) ;
            break ;
        
        case 2 :
            printf( "Enter choice %d \n" , choice ) ;
            case_2( studen ) ;
            break ;
           
        case 3 :
            printf( "Enter choice %d \n" , choice ) ;
            printf( "Exiting program.Goodbye!\n") ;
            break ;    
            
        default :
            printf( "Enter choice %d \n" , choice ) ;
            printf( "Invalid choice.Please try again\n") ;
            break ;
        }
        

    } while ( choice < 3 || choice > 3 ) ;
    
    return 0 ;
}

void menu( int choice ) {
    printf( "\n---studen record menu---\n") ;
    printf( "1. input/update studen data \n") ;
    printf( "2. view studen report\n") ;
    printf( "3. exit choice: \n") ;
    
}

void case_1( ss studen[] ) {
    printf( "Enter ID: " ) ;
    while ( scanf( "%d" , &studen[0].id ) != 1 ) {
            printf( "number only \n" ) ;
            while(getchar() != '\n') ;
    }
    printf( "Enter Score: " ) ;
    while ( scanf( "%d" , &studen[0].score ) != 1 || studen[0].score > 100 || studen[0].score < 0 ) {
            printf( "number only \n" ) ;
            while(getchar() != '\n') ;
    }
    studen[0].grade = grade( studen ) ;
    printf( "Data updated.Grade calculated. \n") ;

}

void case_2( ss studen[] ) {
    if( studen[0].id == 0 ) {
        printf( "No studen data has been entered yet (ID is 0 ).\n" ) ;
    } else {
        printf( "\n---STUDEN REPORT---\n" ) ;
        printf( "ID: %d\n" , studen[0].id ) ;
        printf( "Score: %d\n" , studen[0].score ) ;
        printf( "Grade: %c\n" , studen[0].grade ) ;

    }

}

char grade( ss studen[] ) {
    if( studen[0].score >= 80 ) {
        return 'A' ;
    } else if ( studen[0].score >= 70 ) {
        return 'B' ;
    } else if ( studen[0].score >= 60 ) {
        return 'C' ;
    } else if ( studen[0].score >= 50 ) {
        return 'D' ;
    } else {
        return 'F' ;
    }
    
}