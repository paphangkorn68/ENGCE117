#include <stdio.h>

struct product {
    int id ;
    int cost ;
    int sell ;
    int mat ;
    int stock ;
} typedef pd;
 
float cal_profit( pd [] ) ;
float cal_percen( pd [] , float ) ;

int main() {

    struct product item[1] ;

    int i = 0 , n = 3 ;
    float tt_porfit ;
    float profit_per ;

    printf ( "enter item id \n" ) ;
    printf("POO");
    while( scanf( "%d" , &item[i].id ) != 1 ) {
            printf("number pls\n");
    }
    printf ( "enter cost price per unit: \n" ) ;
    while( scanf( "%d" , &item[i].cost ) != 1 ) {
            printf("number pls\n");
    }
    printf ( "enter sell price per unit: \n" ) ;
    while( scanf( "%d" , &item[i].sell ) != 1 ) {
            printf("number pls\n");
    }
    printf ( "enter stock quantity \n" ) ;
    while( scanf( "%d" , &item[i].stock ) != 1 ) {
            printf("number pls\n");
    }

    tt_porfit = cal_profit( item ) ;
    profit_per = cal_percen( item , tt_porfit ) ;

    printf( "\n---INVENTORY PPROFIT REPORT---\n" ) ;
    printf( "item id: %d \n" , item[i].id ) ;
    printf( "cost price : %d sell price : %d stock : %d\n" , item[i].cost , item[i].sell , item[i].stock ) ;
    printf( "total profit: %.2f \n" , tt_porfit ) ;
    printf( "profit percent: %.2f%%\n" , profit_per ) ;
    if( profit_per > 0 ) {
        printf( "status: Profit!\n" ) ;
    } else if ( profit_per == 0 ) {
        printf( "status: Break Even.\n" ) ;
    } else {
        printf( "status: Loss!\n" ) ;
    }
    

    return 0 ;
}

float cal_profit( pd item[] ) {
    int i = 0 ;
    float ttprofit ;
    ttprofit = ( item[i].stock * item[i].sell ) - ( item[i].stock * item[i].cost ) ;
    return ttprofit ;
}

float cal_percen( pd item[] , float tt_porfit ) {
    int i = 0 ;
    float per ;
    per = tt_porfit / ( item[i].cost * item[i].stock ) ;
    per = per * 100 ;
    return per ;
}