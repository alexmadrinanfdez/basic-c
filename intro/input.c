#include <stdio.h>

int main()
{
    int num;

    printf( "Please enter a number: " );
    scanf( "%d", &num ); // ampersand (&) is the address-of operator
    printf( "You entered %d", num );
    return 0;
}