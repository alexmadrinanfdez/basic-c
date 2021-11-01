#include <stdio.h>
 
int main()
{
  int x;
  int y;
  int array[10][5]; // declares an array
   
  for ( x = 0; x < 10; x++ ) {
    for ( y = 0; y < 5; y++ )
      array[x][y] = x * y; // set each element to a value
  }
  printf( "times tables:\n" );
  for ( x = 0; x < 10;x++ ) {
    for ( y = 0; y < 5; y++ ) {
        printf( "[%d][%d]=%d\t", x, y, array[x][y] );
    }
    printf( "\n" );
  }
}
