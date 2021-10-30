#include <stdio.h>

int main()
{
    int num;

    printf( "Please enter a number: " );
    scanf( "%d", &num ); // the ampersand (&) operator accesses memory location
    printf( "You entered %d", num );
    return 0;
}