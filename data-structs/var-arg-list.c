#include <stdarg.h>
#include <stdio.h>

// takes the number of values to average followed by all of the numbers
double avg( int n, ... );

int main()
{
    int i;
    float vals[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    printf( "From the array: [1.1] [2.2] [3.3] [4.4] [5.5]\n" );
    printf( "How many numbers should we include? " );
    scanf( "%i", &i );
    
    switch (i)
    {
    case 0:
        printf("You didn't enter any numbers...");
        break;
    case 1:
        printf( "The mean is just the number, %f\n", vals[0] );
        break;
    case 2:
        printf( "The mean is %f\n", avg( i, vals[0], vals[1] ) );
        break;
    case 3:
        printf( "The mean is %f\n", avg( i, vals[0], vals[1], vals[2] ) );
        break;
    case 4:
        printf( "The mean is %f\n", avg( i, vals[0], vals[1], vals[2], vals[3] ) );
        break;
    case 5:
        printf( "The mean is %f\n", avg( i, vals[0], vals[1], vals[2], vals[3], vals[4] ) );
    default:
        break;
    }
    
    return 0;
}

double avg( int n, ... )
{
    va_list args;                     
    double sum = 0;
    va_start( args, n ); // initialize args to store all values after n
    // sum every input
    for ( int x = 0; x < n; x++ ) {
        sum += va_arg( args, double ); 
    }
    va_end( args ); // cleans up the list
 
    return sum / n;                      
}