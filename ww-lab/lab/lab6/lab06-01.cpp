#include<stdio.h>
#include<string.h>

struct studennode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studennode *next ;
    struct studennode *back ;
} ;

void showall( struct studennode *walk ) ;
struct studennode *addnode( struct studennode **walk , char n[] , int a , char s , float g ) ;
void insnode( struct studennode **walk , char n[] , int a , char s , float g ) ;
void delnode( struct studennode ** walk , struct studennode ** begin ) ;

int main() {

    struct studennode *start , *now ;
    start = NULL ;
    now = addnode( &start , "one" , 6 , 'M' , 3.11 ) ;
    showall( start ) ;
    now = addnode( &start , "two" , 8 , 'F' , 3.22 ) ;
    showall( start ) ;
    insnode( &now , "three" , 10 , 'M' , 3.33 ) ;
    showall( start ) ;
    insnode( &now , "four" , 12 , 'M' , 3.33 ) ;
    showall( start ) ;
    delnode( &now , &start) ; 
    showall( start ) ;
    delnode( &now , &start) ; 
    showall( start ) ;
    delnode( &now , &start) ; 
    showall( start ) ;
    delnode( &now , &start) ; 
    showall( start ) ;
    return 0 ;
}

struct studennode *addnode( struct studennode **walk , char n[] , int a , char s , float g ) {
    struct studennode *temp = NULL ;
    while( *walk != NULL ){
        temp = *walk ;
        walk = &(*walk) -> next ;
    }
    *walk = new struct studennode ;
    strcpy( ( *walk ) -> name , n ) ;
    (*walk) -> age  = a ;
    (*walk) -> sex  = s ;
    (*walk) -> gpa  = g ;
    (*walk) -> next = NULL ;
    (*walk) -> back = temp ;

    return *walk ;
}

void insnode( struct studennode **walk , char n[] , int a , char s , float g ) {
    (*walk) -> back -> next = new struct studennode ;
    strcpy( (*walk) -> back -> next -> name , n ) ;
    (*walk) -> back -> next -> age  = a ;
    (*walk) -> back -> next -> sex  = s ;
    (*walk) -> back -> next -> gpa  = g ;
    (*walk) -> back -> next -> next = *walk ;
    (*walk) -> back -> next -> back = (*walk) -> back ;
    (*walk) -> back = (*walk) -> back -> next ;
}

void delnode( struct studennode ** walk , struct studennode ** begin ) {
    struct studennode *temp ;
    if( ( *walk ) -> back != NULL ) {
        ( *walk ) -> back -> next = ( *walk ) -> next ;
    } else {
        *begin = ( *walk ) -> next ;
    }
    if( (*walk) -> next != NULL ) {
        ( *walk ) -> next -> back = ( *walk ) -> back ;
        temp = ( *walk ) -> next ;
    } else {
        temp = ( *walk ) -> back ;
    }

    delete *walk ;
    *walk = temp ;
}

void showall( struct studennode *walk ) {
    while( walk != NULL ) {
        printf( "%s " , walk -> name ) ;
        walk = walk -> next ;
    }
    printf( " \n" ) ;
}
