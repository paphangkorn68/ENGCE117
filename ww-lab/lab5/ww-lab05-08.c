#include <stdio.h>

struct studen_data {
    int id ;
    int sci;
    int eng ;
    int mat ;
    int ttscore ;
} typedef sdt;
 
void average_score( sdt [] , float * ) ;
char grade( int ) ;

int main() {

    struct studen_data score[1] ;

    int i = 0 , n = 3 ;
    char final_grade ;
    float average ;

    printf ( "enter studen id \n" ) ;
    while( scanf( "%d" , &score[i].id ) != 1 ) {
            printf("number pls\n");
    }
    printf ( "enter math score \n" ) ;
    while( scanf( "%d" , &score[i].mat ) != 1 || score[i].mat >100 ) {
            printf("number pls\n");
    }
    printf ( "enter science score \n" ) ;
    while( scanf( "%d" , &score[i].sci ) != 1 || score[i].sci >100 ) {
            printf("number pls\n");
    }
    printf ( "enter english score \n" ) ;
    while( scanf( "%d" , &score[i].eng ) != 1 || score[i].eng >100 ) {
            printf("number pls\n");
    }
    
    score[i].ttscore = score[i].mat + score[i].sci + score[i].eng ;
    average_score( score , &average ) ;
    final_grade = grade( average ) ;

    printf( "\n--- STUDEN ACADEMIC REPORT---\n" ) ;
    printf( "studen id: %d \n" , score[0].id ) ;
    printf( "math score : %d science score : %d english score : %d\n" , score[0].mat , score[0].sci , score[0].eng ) ;
    printf( "total score: %d \n" , score[0].ttscore ) ;
    printf( "average score: %.2f \n" , average ) ;
    printf( "final grade:%c" , final_grade ) ;
    

    return 0 ;
}

void average_score( sdt score[] , float *average ) {
    *average = (float)score[0].ttscore / 3 ;
}

char grade( int average ) {
    if( average >= 80 ) {
        return 'A' ;
    } else if( average >= 70 ) {
        return 'B' ;
    } else if( average >= 60 ) {
        return 'C' ;
    } else if( average >= 50 ) {
        return 'D' ;
    } else {
        return 'F' ;
    }
}