#include <stdio.h>

int main() {

    int N, i;                               

    printf( "enter number\n" ) ;            //แสดงenter number
    if (scanf("%d", &N) != 0) {             //เช็ค n เป็นตัวเลขหรือไม่
        for( i = 0 ; i < N ; i++ ) {        //loobสำหลับแสดง hello loob ตามจำนวน n ที่ใส่เข้าไป
            printf( "hello loob\n" ) ;
        }                                   //จบfor
        return 1 ;
    }                                       //จบif

    return 0;
}                                           //จบเมน