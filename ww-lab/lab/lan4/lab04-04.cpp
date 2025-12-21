#include <stdio.h>
#include <string.h>

struct studennode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studennode *next ;
} ;

void savenode( struct studennode *child , char n[] , int a , char s , float g ) ;
void gonext1( struct studennode **walk ) ;
void gonext2( struct studennode *walk ) ;

int main() {

    struct studennode *start , *now1 , **now2 ;

    start = new struct studennode ;
    savenode( start , "one" , 6 , 'm' , 3.11 ) ;

    start->next = new struct studennode ;
    savenode( start->next , "two" , 8 , 'f' , 3.22 ) ;

    start->next->next = new struct studennode ;
    savenode( start->next->next , "three" , 10 , 'm' , 3.33 ) ;

    start->next->next->next = new struct studennode ;
    savenode( start->next->next->next , "four" , 12 , 'f' , 3.44 ) ;
    
    start->next->next->next->next = NULL;

    now1 = start ;
    now2 = &start ;
    
    printf( "%s\n" , (*now2)->name ) ;
    gonext1( now2 ) ;
    printf( "%s\n" , (*now2)->name ) ;
    return 0 ;
}

void savenode( struct studennode *child , char n[] , int a , char s , float g ) {
    strcpy(child->name , n ) ;
    child->age = a ;
    child->sex = s ;
    child->gpa = g ;
}

void gonext1( struct studennode **walk ) {
    for( int i = 0 ; i < 4 ; i ++ ) {
        printf( "%s\n" , (*walk)->name ) ;
        *walk = (*walk)->next ;
    }
    
}

void gonext2( struct studennode *walk ) {
    for( int i = 0 ; i < 4 ; i ++ ) {
        printf( "%s\n" , (walk)->name ) ;
        walk = (walk)->next ;
    }
    
}