#include <stdio.h>
 
int main()
{
    printf("ASCII table\n");
    printf("-----------\n");
    for ( int x = 0; x < 128; x++ ) {
        printf( "%d = %c\t", x, (char)x );
    }
    printf("\n");
    printf("-----------\n");
}