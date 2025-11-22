#include <stdio.h>
int main() {
    
    int N2 , i ;
    int in[N2] ;
    int in1[N2] ;
    int in2[N2] ;
    int studentId, score, totalClasses, absentClasses;
    float attendancePercent;
    int passCount = 0;
    int failCount = 0;
    
    
    if (scanf("%d", &N2) != 1) {
        return 1;
    }
    
    
    for (i = 0; i < N2; i++) {
        
        if (scanf("%d %d %d %d", &studentId, &score, &totalClasses, &absentClasses) != 4) {
            break;
        }

        attendancePercent = (float)(totalClasses - absentClasses) / totalClasses * 100.0;
        in[i] = studentId ;
        in1[i] = score ;
        in2[i] = attendancePercent ;
 
    }

    i = 0 ;

    while ( i < N2 ) {
        if ( in1[i] >= 50 && in2[i] >= 75 ) {
            passCount++ ;
            printf( "Student %d : PASS\n" , in[i] ) ;
        }else if ( in1[i] < 50 && in2[i] < 75 ) {
            failCount++ ;
            printf( "Student %d : FAIL - Both Score and Attendance\n" , in[i] ) ;
        }else if ( in1[i] < 50 ) {
            failCount++ ;
            printf( "Student %d : FAIL - Low Score\n" , in[i] ) ;
        }else{
            failCount++ ;
            printf( "Student %d : FAIL -  Low Attendance (75.00%)\n" , in[i] ) ;
        }
        i++ ;
    }
    

    printf("\n--- Summary ---\n");
    printf("Total PASS: %d\n", passCount);
    printf("Total FAIL: %d\n", failCount);
    return 0;
}