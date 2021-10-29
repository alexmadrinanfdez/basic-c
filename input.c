#include <stdio.h>

int main()
{
    int num;

    printf( "Please enter a number: " );
    scanf( "%d", &num ); // the ampersand (&) operator gives memory direction
    printf( "You entered %d", num );
}