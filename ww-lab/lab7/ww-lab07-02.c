#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr ;
    int sum = 0 , i = 0 , n = 0;
    char name[50] = "Data.txt" ;
    int sen[50] ; 

    fptr = fopen(name, "r");


    if( fptr == NULL ) {
        printf( "\nError opening file" ) ;
        exit( 1 ) ;
    }

    printf( "--- file reading process ---\n" ) ;
    printf( "reading data from %s\n" , name ) ;

    while(i < 50 && fscanf(fptr, "%d", &sen[i]) == 1) {
        sum += sen[i];  
        i++;
        n++;
    }

    printf( "file reading complete.\n" ) ;
    printf( "\n---data analysis report---\n" ) ;
    printf( "data read:" ) ;
    for( i = 0 ; i < n  ; i++ ) {
        printf( "%d " , sen[i] ) ;
    }
    printf( "\n" ) ;
    printf( "total sum: %d" , sum ) ;
    fclose( fptr ) ;
    return 0 ;
}
