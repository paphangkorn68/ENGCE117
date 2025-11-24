#include <stdio.h>
int main() {
    char text[101] ;
    int textn[101] ;
    int countUpper = 0 ;
    int countLower = 0 ;
    int countDigit = 0 ;
    int countOther = 0 ;
    int i ;

    while ( scanf( "%s" , text ) != 1  ) {
        printf( "enter number only stard 1 agane \n" ) ;
        while(getchar() != '\n') ;
    }
    for ( i = 0 ; text[i] !='\0' ; i++ ) {
        textn[i] = text[i] ;
        if (textn[i] >= 65 && textn[i] <= 90 ) {
            countUpper++ ;
        }else if ( textn[i] >= 97 && textn[i] <= 122 ) {
            countLower++ ;
        } else if (textn[i] >= 48 && textn[i] <= 57) {
            countDigit++ ;
        } else {
            countOther++ ;
        }
        
        
        

    }
    printf( "Uppercase: %d\n" , countUpper ) ;
    printf( "Lowercase: %d\n" , countLower ) ;
    printf( "Digitscase: %d\n" , countDigit) ;
    printf( "Special/Othercase: %d\n" , countOther ) ;
    return 0 ;
}