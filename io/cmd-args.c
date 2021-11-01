#include <stdio.h>
 
int main ( int argc, char *argv[] )
{
    if ( argc != 2 ) { // checks for the second argument
        printf( "usage: %s <filename>", argv[0] );
    }
    else {
        FILE *file = fopen( argv[1], "r" );
         if ( file == 0 ) {
            printf( "Could not open file\n" );
        }
        else {
            int x;
            while  ( ( x = fgetc( file ) ) != EOF ) { // EOF = end of file
                printf( "%c", x );
            }
            fclose( file );
        }
    }
}