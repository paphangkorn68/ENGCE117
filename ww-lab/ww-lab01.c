#include <stdio.h>

int main() {

    int N , i ;                               

    printf( "enter number\n" ) ;            //แสดงenter number
    if ( scanf( "%d", &N ) != 1 ) {             //เช็ค n เป็นตัวเลขหรือไม่
        printf( "error" ) ;
        return 1 ;
    }else if ( N <= 0 ) {
        printf( "Error" ) ;
    } else{
        for( i = 0 ; i < N ; i++ ) {        //loobสำหลับแสดง hello loob ตามจำนวน n ที่ใส่เข้าไป
            printf( "Hello Loop!\n" ) ;
        }                                   //จบfor
        
    }                                       //จบif

    return 0 ;
}                                           //จบเมน
