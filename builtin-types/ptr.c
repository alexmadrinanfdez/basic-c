#include <stdlib.h>
#include <stdio.h>

int main()
{
    // int *ptr = malloc( sizeof(*ptr) );
    int *ptr;
    /* argument to malloc is the amount of memory requested (in bytes),
    and malloc returns a pointer to the block of memory allocated */
    ptr = malloc( sizeof(*ptr) );
    
    *ptr = 0; // dereferencing
    printf("The value is %d\n", *ptr);
    printf("The address is %d\n", ptr);
    /* the careful coder should free this memory at the end of its usage lest the memory be lost 
    to the operating system for the duration of the program (memory leak) */
    free( ptr );
    /* When 0 is assigned to a pointer, the pointer becomes a null pointer (points to nothing) */
    ptr = 0;

    return 0;
}