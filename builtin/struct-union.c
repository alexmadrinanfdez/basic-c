#include <stdio.h>

union coins {
    struct {
        int quarter;
        int dime;
        int nickel;
        int penny;
    }; // anonymous struct = anonymous union, members are on the outer container
    int tcoins[4];
};

int convert( union coins change );

int main()
{
    union coins change;
    printf("Enter coins:\n");
    for (int i = 0; i < sizeof(change) / sizeof(int); ++i) {
        scanf("%i", change.tcoins + i); // BAD code! input is always suspect!
    }
    printf(
        "There are %i quarters, %i dimes, %i nickels, and %i pennies.\n",
        change.quarter, change.dime, change.nickel, change.penny
    );
    printf( "This makes a total of %d cents\n", convert(change) );
}

int convert( union coins change )
{
    int total = 0;
    total += change.quarter * 25;
    total += change.dime * 10;
    total += change.nickel * 5;
    total += change.penny;
    return total;
}