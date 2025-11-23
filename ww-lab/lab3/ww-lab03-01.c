#include <stdio.h>

struct product {
        char name[50] ; 
        int productID ;
        float price ;
    } ;

int main() {
    struct product item ;
    if ( scanf("%d %f %s" , &item.productID , &item.price , item.name ) != 3 ) {
        return 1 ;
    }
    printf( "productID : %d," , item.productID ) ;
    printf( "price : %.2f," , item.price ) ;
    printf( "name : %s" , item.name ) ;
    return 0 ;
}