#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentNode {
    char name[ 20 ];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
    struct studentNode *back;
};

struct studentNode *AddNode( struct studentNode **, char[], int, char, float );
void InsNode( struct studentNode *, char[], int, char, float );
void GoBack( struct studentNode ** );
void DelNode( struct studentNode * );
void ShowAll( struct studentNode * );

int main() {
    struct studentNode *start, *now ;
    start = NULL ;
    now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
    now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
    InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( start ) ;
    InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( start ) ;
    GoBack( &now ) ;
    DelNode( now ) ; ShowAll( start ) ;
return 0 ;
}//end function

void ShowAll( struct studentNode *walk ) {
    while( walk != NULL ) {
        printf( "%s ", walk->name ) ;
    walk = walk->next ;
    }//end while
    printf( "\n" ) ;
}//end function
struct studentNode *AddNode( struct studentNode **start, char name[], int age, char sex, float gpa ) {
    struct studentNode *newNode ;
    newNode = ( struct studentNode * ) malloc( sizeof( struct studentNode ) ) ;
    strcpy( newNode->name, name ) ;
    newNode->age = age ;
    newNode->sex = sex ;
    newNode->gpa = gpa ;
    newNode->next = *start ;
    newNode->back = NULL ;
    if( *start != NULL )
        ( *start )->back = newNode ;
    *start = newNode ;
    return newNode ;
    
}

void InsNode( struct studentNode *now, char name[], int age, char sex, float gpa ) {
    struct studentNode *newNode ;
    newNode = ( struct studentNode * ) malloc( sizeof( struct studentNode ) ) ;
    strcpy( newNode->name, name ) ;
    newNode->age = age ;
    newNode->sex = sex ;
    newNode->gpa = gpa ;
    newNode->next = now->next ;
    newNode->back = now ;
    if( now->next != NULL )
        ( now->next )->back = newNode ;
    now->next = newNode ;
}

void GoBack( struct studentNode **now ) {
    *now = ( *now )->back ;
}

void DelNode( struct studentNode *now ) {
    if( now->back != NULL )
        ( now->back )->next = now->next ;
    if( now->next != NULL )
        ( now->next )->back = now->back ;
    free( now ) ;
}

