#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    // FOR
    printf( "FOR loop:\n" );
    int x;
    for ( x = 0; x < 10; x++ ) {
        if ( x != 0 )
            printf( ", " );
        printf( "%d", x );
    }
    printf( "\n" );
    getchar();

    // WHILE
    printf( "WHILE loop:\n" );
    char y = 65;
    x = 0;
    while ( x < 10 ) {
        if ( x != 0 )
            printf( ", " );
        printf( "%c", y + x );
        x++;
    }
    printf( "\n\n" );
    getchar();

    // DO WHILE
    printf( "DO WHILE loop:\n" );
    int i = 0;
    int z = 0;
    do {
        z += rand() % 10; // not random <- no seed
        if ( z == 0 )
            break;
        else if ( z % 2 == 0 )
            continue;
        else
            printf( "%d %d", z, i );
            i++;
    } while ( i < 10 );

    return 0;
}