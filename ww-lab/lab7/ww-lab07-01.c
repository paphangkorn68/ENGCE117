#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr ;
    int year = 2025 , i = 0 , n = 0;
    char name[50] ;
    char sen[50][50] ; 

    printf("Enter name file: \n");
    scanf( "%s" , name ) ;
    fptr = fopen( name , "r+" ) ;

    if( fptr == NULL ) {
        printf( "\nError opening file" ) ;
        exit( 1 ) ;
    }

    printf( "--- file writing process ---\n" ) ;
    printf( "writinh data to %s\n" , name ) ;

    while(fscanf( fptr , "%s " , sen[i]  ) != EOF ) {           
        i++ ;
        n++ ;
    }

    fprintf(fptr , "\n%d" , year ) ;

    printf( "file operation complete.\n" ) ;
    printf( "\n---file operation report---\n" ) ;
    printf( "action:file created and data written successfully.\n" ) ;
    printf( "filename: %s\n" , name ) ;

    for( i = 0 ; i < n  ; i++ ) {
        printf( "%s " , sen[i] ) ;
    }


    fclose( fptr ) ;
    return 0 ;
}
