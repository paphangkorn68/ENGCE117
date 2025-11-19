// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int score;
    
    // รับค่าคะแนนสอบ
    printf( "enter score\n") ;
    if (scanf("%d", &score) != 1) {
        printf( "error" ) ;
        return 1; // Handle input failure
    }else if ( score >= 80 ) {
        printf( "A" ) ;
    }else if ( score >= 70 ) {
        printf( "B" ) ;
    }else if ( score >= 60 ) {
        printf( "C" ) ;
    }else if ( score >= 50 ) {
        printf( "D" ) ;
    }else{
        printf( "F" );
    }
    
    
    // TODO: Implement the cascading if-else if-else logic here

    return 0;
}