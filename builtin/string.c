#include <stdio.h>
#include <string.h>
 
// char *fgets (char *str, int size, FILE* file);
// int strcmp ( const char *s1, const char *s2 );
// char *strcat ( char *dest, const char *src );
// char *strcpy ( char *dest, const char *src );
// char *strncpy ( char *dest, const char *src, size_t len );
// size_t strlen ( const char *s );

void strip_newline( char *str, int size )
{ // remove the newline from the end of a string entered using fgets
    int i;
    for (  i = 0; i < size; ++i ) {
        if ( str[i] == '\n' ) {
            str[i] = '\0';
            return;
        }
    }
}
 
int main()
{
    char name[25];
    char lastname[25];
    char fullname[50]; // big enough to hold both name and lastname
 
    printf( "Please enter your name: " );
    fgets( name, 50, stdin );
    strip_newline( name, 50 );

    if ( strcmp ( name, "Alejandro" ) == 0 ) {
        printf( "That's my name too.\n" );
    }
    else {
        printf( "That's not my name.\n" );
    }
    printf( "Your name is %d letters long\n", strlen ( name ) );

    printf( "Enter your last name: " );
    fgets( lastname, 50, stdin );
    strip_newline( lastname, 50 );
    strcpy( fullname, name );
    // strcat will look for the \0 and add the second string starting at that location
    strcat( fullname, " " );
    strcat( fullname, lastname );
    printf( "Your full name is %s\n", fullname );
 
    return 0;
}