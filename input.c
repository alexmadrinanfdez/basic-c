#include <stdio.h>

int main()
{
    int num;

    printf( "Please enter a number: " );
    scanf( "%d", &num ); // the ampersand (&) operator accesses memory direction
    if ( num > 0 )
        printf( "The number is positive.\n" );
    else if ( num < 0 )
        printf( "The number is negative.\n" );
    else
        printf( "The number is zero.\n" );
    
    printf( "You entered %d.", num );
    
}