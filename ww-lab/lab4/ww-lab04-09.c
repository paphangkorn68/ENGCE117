#include <stdio.h>
int main() {

    int n , i ;
    float Salary , texrage , ttsalary , netsalary ;
   
    

    printf( "Salary\n" ) ;
    while( scanf( "%f" , &Salary ) != 1 ) {
    printf( "number pls\n" ) ;
    } 

    if( Salary >= 50000 ) {
            texrage = 0.1 ;
    } else if ( Salary >= 20000 ) {
            texrage = 0.05 ;
    } 

    ttsalary = Salary * texrage ;
    netsalary = Salary - ttsalary ;

    printf( "\n---SALARY CALCULATION REPORT---\n" ) ;
    printf( "Gorss Salary: %.0f THB\n" , Salary ) ;
    printf( "TAx Rate Applied: %.0f% \n" , texrage * 100 ) ;
    printf( "Tax Amount Deducted: %.2f \n" , ttsalary ) ;
    printf( "Net Salary: %.2f \n" , netsalary ) ;
    return 0 ;
}