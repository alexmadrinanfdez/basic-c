#include <stdio.h>
 
 // to do: include 'break' and 'continue' statements
int main()
{
    // FOR
    printf( "FOR loop:\n" );
    int x;
    for ( x = 0; x < 10; x++ ) {
        if ( x != 0 )
            printf( ", " );
        printf( "0%d", x );
    }
    printf( "\n\n" );
    getchar();

    // WHILE
    printf( "WHILE loop:\n" );
    while ( x < 20 ) {
        if ( x != 10 )
            printf( ", " );
        printf( "%d", x );
        x++;
    }
    printf( "\n\n" );
    getchar();

    // DO WHILE
    printf( "DO WHILE loop:\n" );
    do {
        if ( x != 20 )
            printf( ", " );
        printf( "%d", x );
        x++;
    } while ( x < 30 );
    printf( "\n\n" );
    getchar();
}