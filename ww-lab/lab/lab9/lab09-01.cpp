#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

class LinkedList {
    protected :
        struct studentNode *start ;
    public :
        LinkedList() ;
        ~LinkedList() ;
        void InsNode( char n[] , int a , char s , float g ) ;
        void DelNode() ;
        void GoNext() ;
        void GoFirst() ;
        void GoLast() ;
        void ShowAll() ;
        int FindNode ( char n[] ) ;
        struct studentNode* NowNode(char n[]) ;
        void EditNode( char n[] , int a , char s , float g ) ;
        struct studentNode* GetStart() { 
            return start ; 
        }
} ;

void EditData( LinkedList *ll ) ;
void AddData ( LinkedList *ll ) ;
void FindData( LinkedList *ll ) ;
void readfile( LinkedList *ll ) ;
void writefile( LinkedList *ll ) ;

int main() {
    LinkedList listA ;
    int menu ;
    readfile( &listA ) ;
    printf("menu - (1) Add\n   (2) Edit\n   (3) Deleate\n   (4) Find\n   (5) Show\n   (0) Edit\n : ") ;
    scanf( "%d" , &menu ) ;
    while ( menu != 0 ) {
        switch ( menu ) {
            case 1 :
                AddData(&listA) ;
                break ;
            case 2 :
                EditData(&listA) ;
                break ; 
            case 3 :
                listA.DelNode() ;
                break ;  
            case 4 :
                FindData(&listA) ;
                break ; 
            case 5 :
                listA.ShowAll() ;
                break ; 
        }
        printf("menu - (1) Add\n   (2) Edit\n   (3) Deleate\n   (4) Find\n   (5) Show\n   (0) Edit\n : ") ;
        scanf( "%d" , &menu ) ;
    }
    writefile( &listA ) ;
    return 0 ;
}

LinkedList::LinkedList() {
    start = NULL ;
}

LinkedList:: ~LinkedList() {
    while ( start != NULL ) {
        studentNode *tmp = start ;
        start = start->next ;
        delete tmp ;
    }
}

void LinkedList::InsNode( char n[] , int a , char s , float g ) {
    studentNode *p = new studentNode ;
    strcpy( p->name, n ) ;
    p->age = a ;
    p->sex = s ;
    p->gpa = g ;
    p->next = NULL ;

    if ( start == NULL ) {
        start = p ;
    } else {
        studentNode *t = start ;
        while ( t->next != NULL )
            t = t->next ;
        t->next = p ;
    }
}

void LinkedList::DelNode() {
    if ( start == NULL ) return ;
    char name[20] ;
    printf( "Enter name to delete : " ) ;
    scanf( "%s", name ) ;

    studentNode *p = start, *prev = NULL ;
    while (p != NULL) {
        if ( strcmp(p->name, name ) == 0) {
            if ( prev == NULL )
                start = p->next ;
            else
                prev->next = p->next ;
            delete p ;
            printf("Deleted!\n") ;
            return ;
        }
        prev = p ;
        p = p->next ;
    }
    printf( "Not found!\n" ) ;
}

void LinkedList::ShowAll() {
    studentNode *p = start ;
    printf("\n--- Student List ---\n") ;
    while (p != NULL) {
        printf( "Name:%s Age:%d Sex:%c GPA:%.2f\n", p->name, p->age, p->sex, p->gpa ) ;
        p = p->next ;
    }
}

int LinkedList::FindNode( char n[] ) {
    studentNode *p = start ;
    while ( p != NULL ) {
        if ( strcmp( p->name, n ) == 0 )
            return 1 ;
        p = p->next ;
    }
    return 0 ;
}

studentNode* LinkedList:: NowNode( char n[] ) {
    studentNode *p = start ;
    while ( p != NULL ) {
        if ( strcmp(p->name, n ) == 0 )
            return p ;
        p = p->next ;
    }
    return NULL ;
}

void LinkedList::EditNode( char n[], int a, char s, float g ) {
    studentNode *p = NowNode( n ) ;
    if ( p != NULL ) {
        p->age = a ;
        p->sex = s ;
        p->gpa = g ;
        printf( "Edited!\n" ) ;
    } else {
        printf( "Not found!\n" ) ;
    }
}

void AddData( LinkedList *ll ) {
    char n[20] , s ;
    int a ;
    float g ;
    printf( "Name : " ) ; 
    scanf( "%s" , n ) ;
    printf( "Age  : " ) ; 
    scanf( "%d" , &a ) ;
    printf( "Sex  : " ) ; 
    scanf( " %c" , &s ) ;
    printf( "GPA  : " ) ; 
    scanf( "%f" , &g ) ;
    ll->InsNode( n, a, s, g ) ;
}

void EditData( LinkedList *ll ) {
    char n[20], s ;
    int a ;
    float g ;
    printf( "Name to edit : " ) ; 
    scanf( "%s" , n ) ;
    printf( "New Age  : ") ; 
    scanf( "%d" , &a ) ;
    printf( "New Sex  : ") ; 
    scanf( " %c" , &s ) ;
    printf( "New GPA  : ") ; 
    scanf( "%f", &g ) ;
    ll->EditNode( n, a, s, g ) ;
}

void FindData(LinkedList *ll) {
    char n[20] ;
    printf( "Name to find : " ) ; scanf("%s", n) ;
    if ( ll->FindNode( n ) )
        printf( "Found!\n" ) ;
    else
        printf( "Not found!\n" ) ;
}

void writefile( LinkedList *ll ) {
    FILE *fp = fopen( "student.dat", "wb" ) ;
    studentNode *p = ll->GetStart() ; 
    while ( p != NULL ) {
        fwrite( p, sizeof(studentNode) - sizeof(studentNode*), 1, fp ) ;
        p = p->next ;
    }
    fclose(fp) ;
}

void readfile(LinkedList *ll) {
    FILE *fp = fopen( "student.dat", "rb" ) ;
    if (fp == NULL) return ;

    studentNode temp ;
    while (fread(&temp, sizeof(studentNode) - sizeof(studentNode*), 1, fp ) ) {
        ll->InsNode( temp.name, temp.age, temp.sex, temp.gpa ) ;
    }
    fclose(fp) ;
}
