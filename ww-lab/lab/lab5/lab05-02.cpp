#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

void InsNode( struct studentNode **now , char n[] , int a , char s , float g ) ;
void GoNext( struct studentNode ***now ) ;
void DelNode( struct studentNode **now ) ;
void ShowAll( struct studentNode **walk ) ;

int main() {
    struct studentNode *start , **now ;
    start = NULL ; now = &start ;

    InsNode( now , "one" , 6 , 'M' , 3.11 ) ; 
    ShowAll( &start ) ;
    InsNode( now , "two" , 8 , 'F' , 3.22 ) ; 
    ShowAll( &start ) ;
    GoNext( &now ) ;
    InsNode( now , "three" , 10 , 'M' , 3.33 ) ; 
    ShowAll( &start ) ;
    InsNode( now , "four" , 12 , 'F' , 3.44 ) ; 
    ShowAll( &start ) ;
    GoNext( &now ) ;
    DelNode( now ) ;
    ShowAll( &start ) ;

    return 0;
}

void InsNode( struct studentNode **now, char n[], int a, char s, float g ) {
    struct studentNode *newnode = new struct studentNode ;
    strcpy( newnode->name , n ) ;
    newnode->age = a ;
    newnode->sex = s ;
    newnode->gpa = g ;
    newnode->next = *now ;
    *now = newnode ;
}

void GoNext( struct studentNode ***now ) {
    if ( **now != NULL ) {
        *now = &( **now )->next ;
    }
}

void DelNode( struct studentNode **now ) {
    struct studentNode *temp ;
    if ( *now != NULL ) {
        temp = *now ;
        *now = ( *now )->next ;
        delete( temp ) ;
    }
}

void ShowAll( struct studentNode **walk ) {
    while ( *walk != NULL ) {
        printf( "%s " , ( *walk )->name) ;
        walk = &( *walk )->next ;
    }
    printf( "\n" ) ;
}
