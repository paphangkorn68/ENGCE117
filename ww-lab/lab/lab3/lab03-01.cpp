#include <stdio.h>

struct studen {
    int age ;
    char name[20] ;
    char sex ;
    float gpa ; 

} ;

void upgrade( struct studen ) ;

int main() {
    struct studen boy ;
    boy.sex = 'M' ;
    boy.gpa = 3 ;

    upgrade( boy ) ;
    printf( "gpa = %.2f" , boy.gpa ) ;

    return 0 ;
}

void upgrade( struct studen boy ) {

    boy.gpa += 10 ;

}
