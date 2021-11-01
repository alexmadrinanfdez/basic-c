#include <stdio.h>

void recurse ( int cnt )
{
    printf( "%d\n", cnt );
    recurse ( cnt + 1 ); // each call gets its own copy of count
}

int main()
{
    printf( "How many times a recursive function is called before the program terminates?" );
    getchar();
    recurse ( 1 );
    return 0;
}