#include <stdio.h>

void increase( int *) ;

int main(){
    int data ;
    printf("Enter initial integer value: \n");
    while (scanf("%d", &data) != 1) {
        printf("Number pls\n");
    }

    printf("--- pointer modification report---\n") ;
    printf("1. value before function call: %d\n" , data ) ;
    increase( &data  ) ;
    printf("2. value after function call: %d\n" , data ) ;

    return 0 ;
}

void increase( int *data ) {
    *data += 10 ;
}
