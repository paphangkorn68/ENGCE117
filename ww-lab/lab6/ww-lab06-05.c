#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count( char *str ) ;

int main() {
    int MAX = 101 ;
    char sentence[MAX] ;
    int vowel_count;

    printf( "Enter a sentence: " ) ;

    if ( fgets( sentence , MAX , stdin ) == NULL ) {
        return 1 ;
    }

    sentence[ strcspn( sentence , "\n" ) ] = '\0' ;

    vowel_count = count( sentence ) ;

    printf( "\n--- STRING ANALYSIS REPORT ---\n" ) ;
    printf( "Input String: \"%s\"\n" , sentence ) ;
    printf( "Total Vowel Count: %d\n" , vowel_count ) ;

    return 0 ;
}

int count(char *str) {
    int count = 0 ;
    while ( *str != '\0' ) {
        char ch = tolower( (unsigned char) * str ) ;
        if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) {
            count++ ;
        }
        str++ ;
    }
    return count;
}