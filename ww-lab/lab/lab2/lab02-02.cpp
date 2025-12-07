#include <stdio.h>
#include <string.h>
//ประกาศโปโตไทปฟังก์ชั่น
char* revers( char [] ) ;

int main() {
    //ประกาศตัวแปล
    char text[50] = "Hell World" ;
    char *out ;
    //เรียกใช้ฟังก์ชั่น
    out = revers( text ) ;
    //แสดงค่า
    printf( "%s\n" , text ) ;
    printf( "%s\n" , out ) ;

    // ปล่อยหน่วยความจำ
    delete[] out;

    return 0 ;
}

//ฟังก์ชั่นสลับตัวอักสร
char* revers( char text[] ) {
    int n , i ;
    n = strlen(text) ;
    char *out = new char[50] ;

    for(i = 0 ; i < n ; i++ ) {
        out[n - i - 1] = text[i] ;
    }
    out[n] = '\0';
    return out ;
}