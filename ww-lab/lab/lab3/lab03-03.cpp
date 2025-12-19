#include <stdio.h>

struct studen {
    int age ;
    char name[20] ;
    char sex ;
    float gpa ; 

} ;

struct studen upgrade( struct studen boy ) ;

int main() {
    struct studen boy ;
    boy.sex = 'M' ;
    boy.gpa = 3 ;

    boy = upgrade( boy ) ;
    printf( "gpa = %.2f" , boy.gpa ) ;

    return 0 ;
}

struct studen upgrade( struct studen boy ) {

    boy.gpa += 10 ;

    return boy ;

}