#include <stdio.h>

int main()
{
    int num;

    printf( "Please enter a number: " );
    scanf( "%d", &num ); // ampersand (&) is the address-of operator
    if (num > 255)
        printf("Too large! Choose a value below 256");
    else
        printf( "The ASCII symbol associated is %c", num );
    return 0;
}